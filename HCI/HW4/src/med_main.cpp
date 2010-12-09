#include <wx/wx.h>

#include "med.h"
#include "MedMedMain.h"
#include "MedMyDialog21.h"



class MyApp : public wxApp
{
    public:
        virtual bool OnInit();
};
  
IMPLEMENT_APP( MyApp )


bool MyApp::OnInit()
{
    wxInitAllImageHandlers();
    MedMedMain *main = new MedMedMain( NULL );
    main->Show( true );
    
    return( true );
}

