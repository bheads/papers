#include <wx/wx.h>

#include "search.h"
#include "MyProject1MyDialog1.h"



class MyApp : public wxApp
{
    public:
        virtual bool OnInit();
};
  
IMPLEMENT_APP( MyApp )


bool MyApp::OnInit()
{
    wxInitAllImageHandlers();
    MyProject1MyDialog1 *main = new MyProject1MyDialog1( NULL );
    main->Show( true );
    
    return( true );
}

