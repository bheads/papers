///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec 21 2009)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "med.h"

///////////////////////////////////////////////////////////////////////////

MedMain::MedMain( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	
	m_statusBar4 = this->CreateStatusBar( 1, wxST_SIZEGRIP, wxID_ANY );
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxVERTICAL );
	
	m_panel3 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );
	
	m_toolBar3 = new wxToolBar( m_panel3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTB_FLAT|wxTB_TEXT|wxTB_VERTICAL ); 
	m_toolBar3->AddTool( wxID_ANY, wxT("Home"), wxBitmap( wxT("/home/bheads/Documents/papers/HCI/HW4/src/icons/house.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString );
	m_toolBar3->AddSeparator();
	m_toolBar3->AddTool( wxID_ANY, wxT("   List All\nEquipment"), wxBitmap( wxT("/home/bheads/Documents/papers/HCI/HW4/src/icons/database_table.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxT("List all major equipment") );
	m_toolBar3->AddSeparator();
	m_toolBar3->AddTool( wxID_ANY, wxT(" Add New\nEquipment"), wxBitmap( wxT("/home/bheads/Documents/papers/HCI/HW4/src/icons/table_add.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString );
	m_toolBar3->AddTool( wxID_ANY, wxT("      Edit\nEquipment"), wxBitmap( wxT("/home/bheads/Documents/papers/HCI/HW4/src/icons/table_edit.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString );
	m_toolBar3->AddTool( wxID_ANY, wxT("Report Defect"), wxBitmap( wxT("/home/bheads/Documents/papers/HCI/HW4/src/icons/table_error.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString );
	m_toolBar3->Realize();
	
	bSizer10->Add( m_toolBar3, 0, wxEXPAND, 5 );
	
	home = new wxPanel( m_panel3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
	home->Hide();
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );
	
	
	bSizer12->Add( 0, 0, 1, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxGridSizer* gSizer2;
	gSizer2 = new wxGridSizer( 5, 7, 0, 0 );
	
	
	gSizer2->Add( 0, 0, 0, 0, 5 );
	
	
	gSizer2->Add( 0, 0, 0, 0, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer191;
	bSizer191 = new wxBoxSizer( wxVERTICAL );
	
	m_bitmap1 = new wxStaticBitmap( home, wxID_ANY, wxBitmap( wxT("/home/bheads/Documents/papers/HCI/HW4/src/icons\\house.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer191->Add( m_bitmap1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_staticText18 = new wxStaticText( home, wxID_ANY, wxT("Home"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	bSizer191->Add( m_staticText18, 0, wxALL, 5 );
	
	gSizer2->Add( bSizer191, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_bitmap2 = new wxStaticBitmap( home, wxID_ANY, wxBitmap( wxT("/home/bheads/Documents/papers/HCI/HW4/src/icons\\arrow_down.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_bitmap2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer201;
	bSizer201 = new wxBoxSizer( wxVERTICAL );
	
	m_bitmap3 = new wxStaticBitmap( home, wxID_ANY, wxBitmap( wxT("/home/bheads/Documents/papers/HCI/HW4/src/icons\\database_table.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer201->Add( m_bitmap3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_staticText19 = new wxStaticText( home, wxID_ANY, wxT("   List All \nEquipment"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText19->Wrap( -1 );
	bSizer201->Add( m_staticText19, 0, wxALL, 5 );
	
	gSizer2->Add( bSizer201, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 0, 0, 5 );
	
	
	gSizer2->Add( 0, 0, 0, 0, 5 );
	
	
	gSizer2->Add( 0, 0, 0, 0, 5 );
	
	m_bitmap4 = new wxStaticBitmap( home, wxID_ANY, wxBitmap( wxT("/home/bheads/Documents/papers/HCI/HW4/src/icons\\arrow_down_divide.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_bitmap4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	gSizer2->Add( 0, 0, 0, 0, 5 );
	
	
	gSizer2->Add( 0, 0, 0, 0, 5 );
	
	
	gSizer2->Add( 0, 0, 0, 0, 5 );
	
	
	gSizer2->Add( 0, 0, 0, 0, 5 );
	
	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxVERTICAL );
	
	m_bitmap5 = new wxStaticBitmap( home, wxID_ANY, wxBitmap( wxT("/home/bheads/Documents/papers/HCI/HW4/src/icons\\table_add.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( m_bitmap5, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_staticText20 = new wxStaticText( home, wxID_ANY, wxT("  Add New\nEquipment"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText20->Wrap( -1 );
	bSizer21->Add( m_staticText20, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	gSizer2->Add( bSizer21, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer( wxVERTICAL );
	
	m_bitmap6 = new wxStaticBitmap( home, wxID_ANY, wxBitmap( wxT("/home/bheads/Documents/papers/HCI/HW4/src/icons\\table_edit.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22->Add( m_bitmap6, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_staticText21 = new wxStaticText( home, wxID_ANY, wxT("      Edit\nEquipment"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	bSizer22->Add( m_staticText21, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	gSizer2->Add( bSizer22, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer23;
	bSizer23 = new wxBoxSizer( wxVERTICAL );
	
	m_bitmap7 = new wxStaticBitmap( home, wxID_ANY, wxBitmap( wxT("/home/bheads/Documents/papers/HCI/HW4/src/icons\\table_error.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer23->Add( m_bitmap7, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_staticText221 = new wxStaticText( home, wxID_ANY, wxT("Report Defect"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText221->Wrap( -1 );
	bSizer23->Add( m_staticText221, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	gSizer2->Add( bSizer23, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	bSizer12->Add( gSizer2, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer12->Add( 0, 0, 1, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	home->SetSizer( bSizer12 );
	home->Layout();
	bSizer12->Fit( home );
	bSizer10->Add( home, 1, wxTOP|wxRIGHT|wxLEFT|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );
	
	add = new wxPanel( m_panel3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
	add->Hide();
	
	wxBoxSizer* bSizer101;
	bSizer101 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer2;
	sbSizer2 = new wxStaticBoxSizer( new wxStaticBox( add, wxID_ANY, wxT("Add New Equipment") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer2;
	fgSizer2 = new wxFlexGridSizer( 5, 2, 0, 0 );
	fgSizer2->SetFlexibleDirection( wxBOTH );
	fgSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText7 = new wxStaticText( add, wxID_ANY, wxT("Part Number"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	fgSizer2->Add( m_staticText7, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrl5 = new wxTextCtrl( add, wxID_ANY, wxT("1234"), wxDefaultPosition, wxSize( 120,-1 ), wxTE_READONLY );
	m_textCtrl5->Enable( false );
	
	fgSizer2->Add( m_textCtrl5, 1, wxALL|wxEXPAND, 5 );
	
	m_staticText8 = new wxStaticText( add, wxID_ANY, wxT("Part Name"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	fgSizer2->Add( m_staticText8, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_comboBox1 = new wxComboBox( add, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 300,-1 ), 0, NULL, 0 ); 
	fgSizer2->Add( m_comboBox1, 0, wxALL, 5 );
	
	m_staticText10 = new wxStaticText( add, wxID_ANY, wxT("Acquired Date"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	fgSizer2->Add( m_staticText10, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_datePicker2 = new wxDatePickerCtrl( add, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT );
	fgSizer2->Add( m_datePicker2, 1, wxALL|wxEXPAND, 5 );
	
	m_staticText9 = new wxStaticText( add, wxID_ANY, wxT("Description"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	fgSizer2->Add( m_staticText9, 0, wxALL, 5 );
	
	m_textCtrl6 = new wxTextCtrl( add, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 300,-1 ), wxTE_MULTILINE|wxTE_WORDWRAP );
	m_textCtrl6->SetMinSize( wxSize( 300,-1 ) );
	
	fgSizer2->Add( m_textCtrl6, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText11 = new wxStaticText( add, wxID_ANY, wxT("Item Type"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	fgSizer2->Add( m_staticText11, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );
	
	m_radioBtn2 = new wxRadioButton( add, wxID_ANY, wxT("Emergency Equipment"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_radioBtn2, 0, wxALL, 5 );
	
	m_radioBtn1 = new wxRadioButton( add, wxID_ANY, wxT("General Equipment"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_radioBtn1, 0, wxALL, 5 );
	
	m_radioBtn4 = new wxRadioButton( add, wxID_ANY, wxT("Lab Equipment"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_radioBtn4, 0, wxALL, 5 );
	
	m_radioBtn5 = new wxRadioButton( add, wxID_ANY, wxT("Office Equipment"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_radioBtn5, 0, wxALL, 5 );
	
	m_radioBtn3 = new wxRadioButton( add, wxID_ANY, wxT("Pharmacy Equipment"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_radioBtn3, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer121;
	bSizer121 = new wxBoxSizer( wxHORIZONTAL );
	
	m_radioBtn6 = new wxRadioButton( add, wxID_ANY, wxT("Other"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer121->Add( m_radioBtn6, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_comboBox2 = new wxComboBox( add, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	bSizer121->Add( m_comboBox2, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	bSizer11->Add( bSizer121, 1, wxEXPAND, 5 );
	
	fgSizer2->Add( bSizer11, 1, wxEXPAND, 5 );
	
	sbSizer2->Add( fgSizer2, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizer13->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_button5 = new wxButton( add, wxID_ANY, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer13->Add( m_button5, 0, wxALL, 5 );
	
	m_button6 = new wxButton( add, wxID_ANY, wxT("Add New Part"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer13->Add( m_button6, 0, wxALL, 5 );
	
	sbSizer2->Add( bSizer13, 0, wxEXPAND, 5 );
	
	bSizer101->Add( sbSizer2, 1, wxEXPAND|wxALL, 5 );
	
	add->SetSizer( bSizer101 );
	add->Layout();
	bSizer101->Fit( add );
	bSizer10->Add( add, 1, wxEXPAND | wxALL, 5 );
	
	defect = new wxPanel( m_panel3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
	defect->Hide();
	
	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgSizer3;
	fgSizer3 = new wxFlexGridSizer( 4, 3, 0, 0 );
	fgSizer3->SetFlexibleDirection( wxBOTH );
	fgSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText13 = new wxStaticText( defect, wxID_ANY, wxT("Item ID"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	fgSizer3->Add( m_staticText13, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrl7 = new wxTextCtrl( defect, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl7->SetMinSize( wxSize( 190,-1 ) );
	
	fgSizer3->Add( m_textCtrl7, 0, wxALL|wxEXPAND, 5 );
	
	m_bpButton4 = new wxBitmapButton( defect, wxID_ANY, wxBitmap( wxT("/home/bheads/Documents/papers/HCI/HW4/src/icons\\magnifier.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	fgSizer3->Add( m_bpButton4, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText14 = new wxStaticText( defect, wxID_ANY, wxT("User \nReporting"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText14->Wrap( -1 );
	fgSizer3->Add( m_staticText14, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrl8 = new wxTextCtrl( defect, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer3->Add( m_textCtrl8, 0, wxALL|wxEXPAND, 5 );
	
	m_bpButton5 = new wxBitmapButton( defect, wxID_ANY, wxBitmap( wxT("/home/bheads/Documents/papers/HCI/HW4/src/icons\\user.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	fgSizer3->Add( m_bpButton5, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText15 = new wxStaticText( defect, wxID_ANY, wxT("Date"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText15->Wrap( -1 );
	fgSizer3->Add( m_staticText15, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_datePicker4 = new wxDatePickerCtrl( defect, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT );
	fgSizer3->Add( m_datePicker4, 1, wxALL|wxEXPAND, 5 );
	
	
	fgSizer3->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText16 = new wxStaticText( defect, wxID_ANY, wxT("Reason"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText16->Wrap( -1 );
	fgSizer3->Add( m_staticText16, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxVERTICAL );
	
	m_checkBox9 = new wxCheckBox( defect, wxID_ANY, wxT("Broken"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer19->Add( m_checkBox9, 0, wxALL, 5 );
	
	m_checkBox10 = new wxCheckBox( defect, wxID_ANY, wxT("Missing Parts"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer19->Add( m_checkBox10, 0, wxALL, 5 );
	
	m_checkBox11 = new wxCheckBox( defect, wxID_ANY, wxT("Unsafe"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer19->Add( m_checkBox11, 0, wxALL, 5 );
	
	m_checkBox12 = new wxCheckBox( defect, wxID_ANY, wxT("Expired"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer19->Add( m_checkBox12, 0, wxALL, 5 );
	
	fgSizer3->Add( bSizer19, 1, wxEXPAND, 5 );
	
	
	fgSizer3->Add( 0, 0, 1, wxEXPAND, 5 );
	
	bSizer17->Add( fgSizer3, 1, wxEXPAND, 5 );
	
	m_staticText12 = new wxStaticText( defect, wxID_ANY, wxT("Details"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	bSizer17->Add( m_staticText12, 0, wxALL, 5 );
	
	m_textCtrl61 = new wxTextCtrl( defect, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_LEFT|wxTE_MULTILINE|wxTE_WORDWRAP|wxSUNKEN_BORDER );
	m_textCtrl61->SetMinSize( wxSize( 300,120 ) );
	
	bSizer17->Add( m_textCtrl61, 0, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizer20->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_button4 = new wxButton( defect, wxID_ANY, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( m_button4, 0, wxALL, 5 );
	
	m_button51 = new wxButton( defect, wxID_ANY, wxT("Report"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( m_button51, 0, wxALL, 5 );
	
	bSizer17->Add( bSizer20, 0, wxEXPAND, 5 );
	
	defect->SetSizer( bSizer17 );
	defect->Layout();
	bSizer17->Fit( defect );
	bSizer10->Add( defect, 1, wxEXPAND|wxALL, 5 );
	
	edit = new wxPanel( m_panel3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
	edit->Hide();
	
	wxBoxSizer* bSizer1011;
	bSizer1011 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer21;
	sbSizer21 = new wxStaticBoxSizer( new wxStaticBox( edit, wxID_ANY, wxT("Edit Equipment") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer21;
	fgSizer21 = new wxFlexGridSizer( 5, 2, 0, 0 );
	fgSizer21->SetFlexibleDirection( wxBOTH );
	fgSizer21->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText71 = new wxStaticText( edit, wxID_ANY, wxT("Part Number"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText71->Wrap( -1 );
	fgSizer21->Add( m_staticText71, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrl51 = new wxTextCtrl( edit, wxID_ANY, wxT("124"), wxDefaultPosition, wxSize( 120,-1 ), wxTE_READONLY );
	m_textCtrl51->Enable( false );
	
	fgSizer21->Add( m_textCtrl51, 1, wxALL|wxEXPAND, 5 );
	
	m_staticText81 = new wxStaticText( edit, wxID_ANY, wxT("Part Name"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText81->Wrap( -1 );
	fgSizer21->Add( m_staticText81, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_comboBox11 = new wxComboBox( edit, wxID_ANY, wxT("Mop"), wxDefaultPosition, wxSize( 300,-1 ), 0, NULL, 0 ); 
	fgSizer21->Add( m_comboBox11, 0, wxALL, 5 );
	
	m_staticText101 = new wxStaticText( edit, wxID_ANY, wxT("Acquired Date"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText101->Wrap( -1 );
	fgSizer21->Add( m_staticText101, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_datePicker21 = new wxDatePickerCtrl( edit, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT );
	fgSizer21->Add( m_datePicker21, 1, wxALL|wxEXPAND, 5 );
	
	m_staticText91 = new wxStaticText( edit, wxID_ANY, wxT("Description"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText91->Wrap( -1 );
	fgSizer21->Add( m_staticText91, 0, wxALL, 5 );
	
	m_textCtrl62 = new wxTextCtrl( edit, wxID_ANY, wxT("Mop used to clean the office"), wxDefaultPosition, wxSize( 300,-1 ), wxTE_MULTILINE|wxTE_WORDWRAP );
	m_textCtrl62->SetMinSize( wxSize( 300,-1 ) );
	
	fgSizer21->Add( m_textCtrl62, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText111 = new wxStaticText( edit, wxID_ANY, wxT("Item Type"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText111->Wrap( -1 );
	fgSizer21->Add( m_staticText111, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer111;
	bSizer111 = new wxBoxSizer( wxVERTICAL );
	
	m_radioBtn21 = new wxRadioButton( edit, wxID_ANY, wxT("Emergency Equipment"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer111->Add( m_radioBtn21, 0, wxALL, 5 );
	
	m_radioBtn11 = new wxRadioButton( edit, wxID_ANY, wxT("General Equipment"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer111->Add( m_radioBtn11, 0, wxALL, 5 );
	
	m_radioBtn41 = new wxRadioButton( edit, wxID_ANY, wxT("Lab Equipment"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer111->Add( m_radioBtn41, 0, wxALL, 5 );
	
	m_radioBtn51 = new wxRadioButton( edit, wxID_ANY, wxT("Office Equipment"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer111->Add( m_radioBtn51, 0, wxALL, 5 );
	
	m_radioBtn31 = new wxRadioButton( edit, wxID_ANY, wxT("Pharmacy Equipment"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer111->Add( m_radioBtn31, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer1211;
	bSizer1211 = new wxBoxSizer( wxHORIZONTAL );
	
	m_radioBtn61 = new wxRadioButton( edit, wxID_ANY, wxT("Other"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1211->Add( m_radioBtn61, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_comboBox21 = new wxComboBox( edit, wxID_ANY, wxT("Cleaning Supplies"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	bSizer1211->Add( m_comboBox21, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	bSizer111->Add( bSizer1211, 1, wxEXPAND, 5 );
	
	fgSizer21->Add( bSizer111, 1, wxEXPAND, 5 );
	
	sbSizer21->Add( fgSizer21, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer131;
	bSizer131 = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizer131->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_button52 = new wxButton( edit, wxID_ANY, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer131->Add( m_button52, 0, wxALL, 5 );
	
	m_button61 = new wxButton( edit, wxID_ANY, wxT("Update Status"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer131->Add( m_button61, 0, wxALL, 5 );
	
	sbSizer21->Add( bSizer131, 0, wxEXPAND, 5 );
	
	bSizer1011->Add( sbSizer21, 1, wxEXPAND|wxALL, 5 );
	
	edit->SetSizer( bSizer1011 );
	edit->Layout();
	bSizer1011->Fit( edit );
	bSizer10->Add( edit, 1, wxEXPAND | wxALL, 5 );
	
	list = new wxPanel( m_panel3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer24;
	bSizer24 = new wxBoxSizer( wxVERTICAL );
	
	m_toolBar2 = new wxToolBar( list, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTB_HORIZONTAL|wxTB_TEXT ); 
	m_toolBar2->AddTool( wxID_ANY, wxT("  Add New\nEquipment"), wxBitmap( wxT("/home/bheads/Documents/papers/HCI/HW4/src/icons/table_add.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString );
	m_toolBar2->AddTool( wxID_ANY, wxT("     Edit\nEquipment"), wxBitmap( wxT("/home/bheads/Documents/papers/HCI/HW4/src/icons/table_edit.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString );
	m_toolBar2->AddSeparator();
	m_toolBar2->AddTool( wxID_ANY, wxT("Report\nDefect"), wxBitmap( wxT("/home/bheads/Documents/papers/HCI/HW4/src/icons/table_error.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString );
	m_toolBar2->AddTool( wxID_ANY, wxT("  Remove\nEquipment"), wxBitmap( wxT("/home/bheads/Documents/papers/HCI/HW4/src/icons/table_delete.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString );
	m_toolBar2->Realize();
	
	bSizer24->Add( m_toolBar2, 0, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer5;
	sbSizer5 = new wxStaticBoxSizer( new wxStaticBox( list, wxID_ANY, wxT("Search") ), wxHORIZONTAL );
	
	m_staticText22 = new wxStaticText( list, wxID_ANY, wxT("Search for"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText22->Wrap( -1 );
	sbSizer5->Add( m_staticText22, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_comboBox7 = new wxComboBox( list, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	sbSizer5->Add( m_comboBox7, 1, wxALL, 5 );
	
	m_bpButton41 = new wxBitmapButton( list, wxID_ANY, wxBitmap( wxT("/home/bheads/Documents/papers/HCI/HW4/src/icons/magnifier.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	sbSizer5->Add( m_bpButton41, 0, wxALL, 5 );
	
	bSizer24->Add( sbSizer5, 0, wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 5 );
	
	wxStaticBoxSizer* sbSizer6;
	sbSizer6 = new wxStaticBoxSizer( new wxStaticBox( list, wxID_ANY, wxT("Equipment") ), wxVERTICAL );
	
	m_scrolledWindow1 = new wxScrolledWindow( list, wxID_ANY, wxDefaultPosition, wxSize( 200,-1 ), wxHSCROLL|wxVSCROLL );
	m_scrolledWindow1->SetScrollRate( 5, 5 );
	wxBoxSizer* bSizer241;
	bSizer241 = new wxBoxSizer( wxVERTICAL );
	
	m_grid1 = new wxGrid( m_scrolledWindow1, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	
	// Grid
	m_grid1->CreateGrid( 2, 7 );
	m_grid1->EnableEditing( true );
	m_grid1->EnableGridLines( true );
	m_grid1->EnableDragGridSize( false );
	m_grid1->SetMargins( 0, 0 );
	
	// Columns
	m_grid1->EnableDragColMove( false );
	m_grid1->EnableDragColSize( true );
	m_grid1->SetColLabelSize( 30 );
	m_grid1->SetColLabelValue( 0, wxT("ID") );
	m_grid1->SetColLabelValue( 1, wxT("Name") );
	m_grid1->SetColLabelValue( 2, wxT("Description") );
	m_grid1->SetColLabelValue( 3, wxT("Category") );
	m_grid1->SetColLabelValue( 4, wxT("Ammount") );
	m_grid1->SetColLabelValue( 5, wxT("Date Aquired") );
	m_grid1->SetColLabelValue( 6, wxT("Is Faulty") );
	m_grid1->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	m_grid1->EnableDragRowSize( true );
	m_grid1->SetRowLabelSize( 80 );
	m_grid1->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	m_grid1->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer241->Add( m_grid1, 1, wxALL|wxEXPAND, 5 );
	
	m_scrolledWindow1->SetSizer( bSizer241 );
	m_scrolledWindow1->Layout();
	sbSizer6->Add( m_scrolledWindow1, 1, wxEXPAND | wxALL, 5 );
	
	bSizer24->Add( sbSizer6, 1, wxEXPAND, 5 );
	
	list->SetSizer( bSizer24 );
	list->Layout();
	bSizer24->Fit( list );
	bSizer10->Add( list, 1, wxEXPAND | wxALL, 5 );
	
	m_panel3->SetSizer( bSizer10 );
	m_panel3->Layout();
	bSizer10->Fit( m_panel3 );
	bSizer9->Add( m_panel3, 1, wxEXPAND, 5 );
	
	this->SetSizer( bSizer9 );
	this->Layout();
	m_menubar1 = new wxMenuBar( 0 );
	m_menu1 = new wxMenu();
	wxMenuItem* m_menuItem3;
	m_menuItem3 = new wxMenuItem( m_menu1, wxID_ANY, wxString( wxT("List All Equipment") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu1->Append( m_menuItem3 );
	
	wxMenuItem* m_separator1;
	m_separator1 = m_menu1->AppendSeparator();
	
	wxMenuItem* m_menuItem4;
	m_menuItem4 = new wxMenuItem( m_menu1, wxID_ANY, wxString( wxT("Add New Equipment") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu1->Append( m_menuItem4 );
	
	wxMenuItem* m_menuItem5;
	m_menuItem5 = new wxMenuItem( m_menu1, wxID_ANY, wxString( wxT("Edit Equipment") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu1->Append( m_menuItem5 );
	
	wxMenuItem* m_menuItem6;
	m_menuItem6 = new wxMenuItem( m_menu1, wxID_ANY, wxString( wxT("Report Defect") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu1->Append( m_menuItem6 );
	
	m_menubar1->Append( m_menu1, wxT("Home") );
	
	m_menu2 = new wxMenu();
	wxMenuItem* m_menuItem7;
	m_menuItem7 = new wxMenuItem( m_menu2, wxID_ANY, wxString( wxT("Find Equipment") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu2->Append( m_menuItem7 );
	
	wxMenuItem* m_menuItem8;
	m_menuItem8 = new wxMenuItem( m_menu2, wxID_ANY, wxString( wxT("Find User") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu2->Append( m_menuItem8 );
	
	m_menubar1->Append( m_menu2, wxT("Search") );
	
	m_menu4 = new wxMenu();
	m_menubar1->Append( m_menu4, wxT("Help") );
	
	this->SetMenuBar( m_menubar1 );
	
}

MedMain::~MedMain()
{
}

MyDialog21::MyDialog21( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("Item Description\nto Lookup"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizer8->Add( m_staticText6, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrl4 = new wxTextCtrl( this, wxID_ANY, wxT("mop"), wxDefaultPosition, wxSize( 350,-1 ), 0 );
	m_textCtrl4->SetMinSize( wxSize( 350,-1 ) );
	
	bSizer8->Add( m_textCtrl4, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_bpButton3 = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("/home/bheads/Documents/papers/HCI/HW4/src/icons\\magnifier.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	bSizer8->Add( m_bpButton3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	bSizer7->Add( bSizer8, 0, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer1;
	sbSizer1 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Search Results") ), wxVERTICAL );
	
	m_listBox1 = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_listBox1->Append( wxT("124     Mop     Cleaning Supplies       2       6/14/2010       NO") );
	m_listBox1->Append( wxT("224     Mop     Cleaning Supplies       1       6/14/2008       Yes - handle Broken") );
	sbSizer1->Add( m_listBox1, 1, wxALL|wxEXPAND, 5 );
	
	bSizer7->Add( sbSizer1, 1, wxEXPAND|wxALL, 5 );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizer9->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_button3 = new wxButton( this, wxID_ANY, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_button3, 0, wxALL, 5 );
	
	m_button4 = new wxButton( this, wxID_ANY, wxT("Use Part Number"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_button4, 0, wxALL, 5 );
	
	bSizer7->Add( bSizer9, 0, wxEXPAND, 5 );
	
	this->SetSizer( bSizer7 );
	this->Layout();
	bSizer7->Fit( this );
	
	this->Centre( wxBOTH );
}

MyDialog21::~MyDialog21()
{
}
