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
#include <wx/stattext.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/textctrl.h>
#include <wx/combobox.h>
#include <wx/datectrl.h>
#include <wx/dateevt.h>
#include <wx/radiobut.h>
#include <wx/button.h>
#include <wx/statbox.h>
#include <wx/bmpbuttn.h>
#include <wx/checkbox.h>
#include <wx/grid.h>
#include <wx/scrolwin.h>
#include <wx/menu.h>
#include <wx/frame.h>
#include <wx/listbox.h>
#include <wx/dialog.h>

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
		wxPanel* home;
		
		
		
		
		wxStaticBitmap* m_bitmap1;
		wxStaticText* m_staticText18;
		
		
		
		
		
		
		wxStaticBitmap* m_bitmap2;
		
		
		
		
		
		
		wxStaticBitmap* m_bitmap3;
		wxStaticText* m_staticText19;
		
		
		
		
		
		
		wxStaticBitmap* m_bitmap4;
		
		
		
		
		wxStaticBitmap* m_bitmap5;
		wxStaticText* m_staticText20;
		
		wxStaticBitmap* m_bitmap6;
		wxStaticText* m_staticText21;
		
		wxStaticBitmap* m_bitmap7;
		wxStaticText* m_staticText221;
		
		
		wxPanel* add;
		wxStaticText* m_staticText7;
		wxTextCtrl* m_textCtrl5;
		wxStaticText* m_staticText8;
		wxComboBox* m_comboBox1;
		wxStaticText* m_staticText10;
		wxDatePickerCtrl* m_datePicker2;
		wxStaticText* m_staticText9;
		wxTextCtrl* m_textCtrl6;
		wxStaticText* m_staticText11;
		wxRadioButton* m_radioBtn2;
		wxRadioButton* m_radioBtn1;
		wxRadioButton* m_radioBtn4;
		wxRadioButton* m_radioBtn5;
		wxRadioButton* m_radioBtn3;
		wxRadioButton* m_radioBtn6;
		wxComboBox* m_comboBox2;
		
		wxButton* m_button5;
		wxButton* m_button6;
		wxPanel* defect;
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
		wxTextCtrl* m_textCtrl61;
		
		wxButton* m_button4;
		wxButton* m_button51;
		wxPanel* edit;
		wxStaticText* m_staticText71;
		wxTextCtrl* m_textCtrl51;
		wxStaticText* m_staticText81;
		wxComboBox* m_comboBox11;
		wxStaticText* m_staticText101;
		wxDatePickerCtrl* m_datePicker21;
		wxStaticText* m_staticText91;
		wxTextCtrl* m_textCtrl62;
		wxStaticText* m_staticText111;
		wxRadioButton* m_radioBtn21;
		wxRadioButton* m_radioBtn11;
		wxRadioButton* m_radioBtn41;
		wxRadioButton* m_radioBtn51;
		wxRadioButton* m_radioBtn31;
		wxRadioButton* m_radioBtn61;
		wxComboBox* m_comboBox21;
		
		wxButton* m_button52;
		wxButton* m_button61;
		wxPanel* list;
		wxToolBar* m_toolBar2;
		wxStaticText* m_staticText22;
		wxComboBox* m_comboBox7;
		wxBitmapButton* m_bpButton41;
		wxScrolledWindow* m_scrolledWindow1;
		wxGrid* m_grid1;
		wxMenuBar* m_menubar1;
		wxMenu* m_menu1;
		wxMenu* m_menu2;
		wxMenu* m_menu4;
	
	public:
		
		MedMain( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("MEData"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 804,554 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		~MedMain();
	
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
		wxListBox* m_listBox1;
		
		wxButton* m_button3;
		wxButton* m_button4;
	
	public:
		
		MyDialog21( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Item Lookup"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );
		~MyDialog21();
	
};

#endif //__med__
