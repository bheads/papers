///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec 21 2009)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __med__
#define __med__

#include <wx/statusbr.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/toolbar.h>
#include <wx/statbmp.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/frame.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/datectrl.h>
#include <wx/dateevt.h>
#include <wx/checkbox.h>
#include <wx/dialog.h>
#include <wx/grid.h>
#include <wx/statbox.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MedMain
///////////////////////////////////////////////////////////////////////////////
class MedMain : public wxFrame 
{
	private:
	
	protected:
		wxStatusBar* m_statusBar4;
		wxPanel* m_panel3;
		wxToolBar* m_toolBar3;
		wxPanel* m_panel4;
		
		
		
		
		wxStaticBitmap* m_bitmap1;
		
		
		
		
		
		
		wxStaticBitmap* m_bitmap2;
		
		
		
		
		
		
		wxStaticBitmap* m_bitmap3;
		
		
		
		
		
		
		wxStaticBitmap* m_bitmap4;
		
		
		
		
		wxStaticBitmap* m_bitmap5;
		
		wxStaticBitmap* m_bitmap6;
		
		wxStaticBitmap* m_bitmap7;
		
		
	
	public:
		
		MedMain( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("MEData"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 690,544 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		~MedMain();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class MyDialog2
///////////////////////////////////////////////////////////////////////////////
class MyDialog2 : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText13;
		wxTextCtrl* m_textCtrl7;
		wxBitmapButton* m_bpButton4;
		wxStaticText* m_staticText14;
		wxTextCtrl* m_textCtrl8;
		wxBitmapButton* m_bpButton5;
		wxStaticText* m_staticText15;
		wxDatePickerCtrl* m_datePicker4;
		
		wxStaticText* m_staticText16;
		wxCheckBox* m_checkBox9;
		wxCheckBox* m_checkBox10;
		wxCheckBox* m_checkBox11;
		wxCheckBox* m_checkBox12;
		
		wxStaticText* m_staticText12;
		wxTextCtrl* m_textCtrl6;
		
		wxButton* m_button4;
		wxButton* m_button5;
	
	public:
		
		MyDialog2( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Defect Equipment Report"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );
		~MyDialog2();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class MyDialog21
///////////////////////////////////////////////////////////////////////////////
class MyDialog21 : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText6;
		wxTextCtrl* m_textCtrl4;
		wxBitmapButton* m_bpButton3;
		wxGrid* m_grid1;
		
		wxButton* m_button3;
		wxButton* m_button4;
	
	public:
		
		MyDialog21( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Item Look Up"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );
		~MyDialog21();
	
};

#endif //__med__
