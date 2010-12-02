

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>

#include <SDL/SDL_image.h>

#include "ini/src/iniparser.h" 

#define FRONT 1
#define BACK 2
//#define SPEED 360.0f // in seconds

double SPEED;

GLuint front, back;
unsigned int x = 0, y = 0;
float fx = 0.0f, fy = 0.0f;

struct sCard {
    float x, y, angle;
    int showing, flip;
};
typedef struct sCard sCard;

sCard cards[21];

void __exit(int i) 
{
    IMG_Quit();
    SDL_Quit();
    exit(i);
}


void animate( sCard *card, float delta)
{
    if( card->flip == 0 ) return;

    if( card->showing == BACK ) {
        if(  (card->angle += (SPEED*delta)) > 180.0f ) {
            card->angle = 180.0f;
            card->flip--;
            card->showing = FRONT;
        }
    } else if( card->showing == FRONT ) {
        if( (card->angle -= (SPEED*delta)) < 0.0f ) {
            card->angle = 0.0f;
            card->flip--;
            card->showing = BACK;
        }
    } else {
        fprintf( stderr, "Showing does not make sense" );
        __exit(1);
    }


}

void loadtexs( GLuint *tex, char *file )
{
    GLint nOfColors;
    GLenum format;
    SDL_Surface *surf;

    if( !(surf = IMG_Load( file ))) {
        fprintf( stderr, "Failed to load front.bmp: %s\n", SDL_GetError());
        __exit(1);
    }

    nOfColors = surf->format->BytesPerPixel; 
    if( nOfColors == 4 ) {
        if( surf->format->Rmask == 0xff ) {
            format = GL_RGBA;
        }else {
            format = GL_BGRA;
        }
    }else {
        if( surf->format->Rmask == 0xff ) {
            format = GL_RGB;
        }else {
            format = GL_BGR;
        }
    }

    glGenTextures( 1, tex );
    glBindTexture( GL_TEXTURE_2D, *tex );
    glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR );
    glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR );
    glTexImage2D( GL_TEXTURE_2D, 0, nOfColors,
            surf->w, surf->h, 0, format, GL_UNSIGNED_BYTE,
            surf->pixels );

    if( surf ) {
        SDL_FreeSurface( surf );
    }
}

void init()
{
    const SDL_VideoInfo *info = NULL;
    int width = 0, height = 0, bpp = 0, flags = 0;
    const SDL_VideoInfo *vi;
    dictionary *config = iniparser_load( "demo.ini" );


    if( SDL_Init( SDL_INIT_EVERYTHING ) < 0 ) {
        fprintf( stderr, "SDL_INIT Failed: %s\n", SDL_GetError());
        __exit(1);
    }

    if( !(IMG_Init( IMG_INIT_PNG ))) {
        fprintf( stderr, "IMG_Init failed: %s\n", IMG_GetError());
        __exit(1);
    }

    if( !(info = SDL_GetVideoInfo())) {
        fprintf( stderr, "Video Query failed: %s\n", SDL_GetError());
        __exit(1);
    }

    vi = SDL_GetVideoInfo();

    width = iniparser_getint( config, "display:width", vi->current_w );
    height = iniparser_getint( config, "display:height", vi->current_h );
    SPEED = iniparser_getdouble( config, "display:fliprate", 180.0 );
    bpp = info->vfmt->BitsPerPixel;

    SDL_GL_SetAttribute( SDL_GL_RED_SIZE, 5 );
    SDL_GL_SetAttribute( SDL_GL_GREEN_SIZE, 5 );
    SDL_GL_SetAttribute( SDL_GL_BLUE_SIZE, 5 );
    SDL_GL_SetAttribute( SDL_GL_DEPTH_SIZE, 16 );
    SDL_GL_SetAttribute( SDL_GL_DOUBLEBUFFER, 1 );

    flags = SDL_OPENGL | ( iniparser_getboolean( config, 
                "display:fullscreen", 1 ) ?  SDL_FULLSCREEN : 0 );
    //flags = SDL_OPENGL;

    if( SDL_SetVideoMode( width, height, bpp, flags ) == 0 ) {
        fprintf( stderr, "Video mode set failed: %s\n", SDL_GetError());
        exit(1);
    }

    float ratio = (float)width / (float)height;

    glShadeModel( GL_SMOOTH );

    glCullFace( GL_BACK );
    glFrontFace( GL_CCW );
    glEnable( GL_CULL_FACE );
    glEnable( GL_DEPTH );


    glClearColor( 0, 0, 0, 0 );
    glViewport( 0, 0, width, height );

    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();

    gluPerspective( 60.0, ratio, 1.0, 1024.0 );
    //gluOrtho2D( 0, width, 0, height );

    glEnable( GL_TEXTURE_2D );

    loadtexs( &back, "back.png" );
    loadtexs( &front, "front.png" );

    iniparser_freedict( config );
}

void getOGLPos( int x, int y, float *fx, float *fy )
{
    GLdouble rayX, rayY, rayZ, len;
    GLint viewport[4];
    GLdouble modelview[16];
    GLdouble projection[16];
    GLfloat depth[2];

    glGetIntegerv( GL_VIEWPORT, viewport );
    glGetDoublev( GL_MODELVIEW_MATRIX, modelview );
    glGetDoublev( GL_PROJECTION_MATRIX, projection );

    
    glReadPixels( x, y, 1, 1, GL_DEPTH_COMPONENT, GL_FLOAT, depth );
    gluUnProject( x, viewport[3]-y, depth[0], modelview, projection, viewport, &rayX, &rayY, &rayZ);

    //len = sqrt( (rayX*rayX) + (rayY * rayY) + (rayZ*rayZ));
    rayX /= 70;
    rayY /= 90;
    rayZ /= len;
    //printf( "X: %f  Y: %f  Z: %f\n", rayX, rayY, rayZ );
    (*fx) = rayX;
    (*fy) = rayY;
}

void input( int *running )
{
    int i;
    SDL_Event event;

    while( SDL_PollEvent( &event )) {
        switch( event.type ) {
            case SDL_KEYDOWN:
                switch( event.key.keysym.sym ) {
                    case SDLK_ESCAPE:
                        (*running) = 0;
                        break;
                    case SDLK_SPACE:
                        for( i = 0; i < 21; ++i ) {
                            cards[i].flip++;
                        }
                        break;
                }
                break;
            case SDL_MOUSEMOTION:
                x = event.motion.x;
                y = event.motion.y;
                getOGLPos( x, y, &fx, &fy );              
                break;
            case SDL_MOUSEBUTTONDOWN:
                for( i = 0; i < 21; ++i ) {
                    if( fx >= (cards[i].x - 1.0f) && fx <=( cards[i].x + 1.0f ) ) {
                        if( fy >= (cards[i].y-2.0f) && fy <= (cards[i].y + 2.0f) ) {
                            cards[i].flip++;
                        }
                    }
                }
                break;
            case SDL_QUIT:
                (*running) = 0;
                break;
        }

    }

}

void drawmouse()
{

    glBegin( GL_QUADS );
    
    glColor4ub( 255.0f, 0.0f, 0.0f, 255.0f );
    glVertex2f( -1.0f, -1.0f);
    glVertex2f( 0.0f, -1.0f);
    glVertex2f( 0.0f, 0.0f);
    glVertex2f( -1.0f, 0.0f);
    glColor4ub( 255.0f, 255.0f, 255.0f, 255.0f );

    glEnd();

}


void drawcard()
{
    static GLfloat v1[] = { -1.0f, -2.0f, 0.0f };
    static GLfloat v2[] = { 1.0f, -2.0f, 0.0f };
    static GLfloat v3[] = { 1.0f, 2.0f, 0.0f };
    static GLfloat v4[] = { -1.0f, 2.0f, 0.0f };
    
    static GLfloat t1[] = { 0.0f, 0.0f };
    static GLfloat t2[] = { 1.0f, 0.0f };
    //static GLfloat t3[] = { 1.0f, 1.0f };
    //static GLfloat t4[] = { 0.0f, 1.0f };
    static GLfloat t3[] = { 1.0f, 357.0f/512.0f };
    static GLfloat t4[] = { 0.0f, 357.0f/512.0f };
    
    //back
    glBindTexture( GL_TEXTURE_2D, back );

    glBegin( GL_QUADS );

    glTexCoord2fv( t4 );
    glVertex3fv( v1 );
    glTexCoord2fv( t3 );
    glVertex3fv( v2 );
    glTexCoord2fv( t2 );
    glVertex3fv( v3 );
    glTexCoord2fv( t1 );
    glVertex3fv( v4 );

    glEnd();

    //front
    glBindTexture( GL_TEXTURE_2D, front );

    glBegin( GL_QUADS );

    glTexCoord2fv( t1 );
    glVertex3fv( v4 );
    glTexCoord2fv( t2 );
    glVertex3fv( v3 );
    glTexCoord2fv( t3 );
    glVertex3fv( v2 );
    glTexCoord2fv( t4 );
    glVertex3fv( v1 );

    glEnd();
}

void render()
{
    static Uint32 old = 0;
    Uint32 ticks = SDL_GetTicks();
    int i;

    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
    glMatrixMode( GL_MODELVIEW );

    for( i = 0; i < 21; ++i ) {
        if( cards[i].flip ) { 
            animate( &cards[i], (float)(ticks - old) / 1000 );
        }
        glLoadIdentity();
        glTranslatef( cards[i].x, cards[i].y, -15.0f );
        glRotatef( cards[i].angle, 0.0, 1.0, 0.0 );
        glLoadName( i );
        drawcard();
    }

    glLoadIdentity();
    glTranslatef( fx, fy, -15.0f );
    //drawmouse();

    SDL_GL_SwapBuffers();
    old = ticks;
}

int main( int argc, char **argv ) 
{
    float x, y;
    int running = 1, i = 0;
    init();

    for( y = 6.0f; y >= -6.0f; y -= 5.0f ) {
        for( x = -9.0f; x <= 9.0f; x += 3.0 ) {
            cards[i].x = x;
            cards[i].y = y;
            cards[i].showing = BACK;
            cards[i].angle = 0.0f;
            cards[i++].flip = 0;
        }
    }

    while( running ) {
        input( &running );
        render();
    }

    __exit(0);
    return( 0 );
}



