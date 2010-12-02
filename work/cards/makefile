

all:
	cd ini && make
	gcc demo.c -o demo -lSDL -lSDL_image -lGL -lGLU ini/libiniparser.a
clean:
	cd ini && make clean
	rm -rf demo

