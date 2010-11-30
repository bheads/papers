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
	m_toolBar3->AddTool( wxID_ANY, wxT("Home"), wxBitmap( wxT("icons\\house.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString );
	m_toolBar3->AddSeparator();
	m_toolBar3->AddTool( wxID_ANY, wxT("   List All\nEquipment"), wxBitmap( wxT("icons\\database_table.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxT("List all major equipment") );
	m_toolBar3->AddSeparator();
	m_toolBar3->AddTool( wxID_ANY, wxT(" Add New\nEquipment"), wxBitmap( wxT("icons\\table_add.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString );
	m_toolBar3->AddTool( wxID_ANY, wxT("      Edit\nEquipment"), wxBitmap( wxT("icons\\table_edit.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString );
	m_toolBar3->AddSeparator();
	m_toolBar3->AddTool( wxID_ANY, wxT("Report Defect"), wxBitmap( wxT("icons\\table_error.png"), wxBITMAP_TYPE_ANY ), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString );
	m_toolBar3->Realize();
	
	bSizer10->Add( m_toolBar3, 0, wxEXPAND, 5 );
	
	m_panel4 = new wxPanel( m_panel3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSUNKEN_BORDER|wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );
	
	
	bSizer12->Add( 0, 0, 1, wxEXPAND, 5 );
	
	wxGridSizer* gSizer2;
	gSizer2 = new wxGridSizer( 5, 7, 0, 0 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_bitmap1 = new wxStaticBitmap( m_panel4, wxID_ANY, wxBitmap( wxT("icons\\house.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_bitmap1, 0, wxALL, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_bitmap2 = new wxStaticBitmap( m_panel4, wxID_ANY, wxBitmap( wxT("icons\\arrow_down.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_bitmap2, 0, wxALL, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_bitmap3 = new wxStaticBitmap( m_panel4, wxID_ANY, wxBitmap( wxT("icons\\database_table.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_bitmap3, 0, wxALL, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_bitmap4 = new wxStaticBitmap( m_panel4, wxID_ANY, wxBitmap( wxT("icons\\arrow_down_divide.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_bitmap4, 0, wxALL, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_bitmap5 = new wxStaticBitmap( m_panel4, wxID_ANY, wxBitmap( wxT("icons\\table_add.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_bitmap5, 0, wxALL, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_bitmap6 = new wxStaticBitmap( m_panel4, wxID_ANY, wxBitmap( wxT("icons\\table_edit.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_bitmap6, 0, wxALL, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_bitmap7 = new wxStaticBitmap( m_panel4, wxID_ANY, wxBitmap( wxT("icons\\table_error.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_bitmap7, 0, wxALL, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	bSizer12->Add( gSizer2, 1, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer12->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_panel4->SetSizer( bSizer12 );
	m_panel4->Layout();
	bSizer12->Fit( m_panel4 );
	bSizer10->Add( m_panel4, 1, wxEXPAND|wxTOP|wxRIGHT|wxLEFT, 5 );
	
	m_panel3->SetSizer( bSizer10 );
	m_panel3->Layout();
	bSizer10->Fit( m_panel3 );
	bSizer9->Add( m_panel3, 1, wxEXPAND, 5 );
	
	this->SetSizer( bSizer9 );
	this->Layout();
}

MedMain::~MedMain()
{
}

MyDialog2::MyDialog2( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgSizer3;
	fgSizer3 = new wxFlexGridSizer( 4, 3, 0, 0 );
	fgSizer3->SetFlexibleDirection( wxBOTH );
	fgSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText13 = new wxStaticText( this, wxID_ANY, wxT("Item ID"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	fgSizer3->Add( m_staticText13, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrl7 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl7->SetMinSize( wxSize( 190,-1 ) );
	
	fgSizer3->Add( m_textCtrl7, 0, wxALL|wxEXPAND, 5 );
	
	m_bpButton4 = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("icons\\magnifier.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	fgSizer3->Add( m_bpButton4, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText14 = new wxStaticText( this, wxID_ANY, wxT("User \nReporting"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText14->Wrap( -1 );
	fgSizer3->Add( m_staticText14, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrl8 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer3->Add( m_textCtrl8, 0, wxALL|wxEXPAND, 5 );
	
	m_bpButton5 = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("icons\\user.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	fgSizer3->Add( m_bpButton5, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText15 = new wxStaticText( this, wxID_ANY, wxT("Date"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText15->Wrap( -1 );
	fgSizer3->Add( m_staticText15, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_datePicker4 = new wxDatePickerCtrl( this, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT );
	fgSizer3->Add( m_datePicker4, 1, wxALL|wxEXPAND, 5 );
	
	
	fgSizer3->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText16 = new wxStaticText( this, wxID_ANY, wxT("Reason"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText16->Wrap( -1 );
	fgSizer3->Add( m_staticText16, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxVERTICAL );
	
	m_checkBox9 = new wxCheckBox( this, wxID_ANY, wxT("Broken"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer19->Add( m_checkBox9, 0, wxALL, 5 );
	
	m_checkBox10 = new wxCheckBox( this, wxID_ANY, wxT("Missing Parts"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer19->Add( m_checkBox10, 0, wxALL, 5 );
	
	m_checkBox11 = new wxCheckBox( this, wxID_ANY, wxT("Unsafe"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer19->Add( m_checkBox11, 0, wxALL, 5 );
	
	m_checkBox12 = new wxCheckBox( this, wxID_ANY, wxT("Expired"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer19->Add( m_checkBox12, 0, wxALL, 5 );
	
	fgSizer3->Add( bSizer19, 1, wxEXPAND, 5 );
	
	
	fgSizer3->Add( 0, 0, 1, wxEXPAND, 5 );
	
	bSizer17->Add( fgSizer3, 1, wxEXPAND, 5 );
	
	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("Details"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	bSizer17->Add( m_staticText12, 0, wxALL, 5 );
	
	m_textCtrl6 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_LEFT|wxTE_MULTILINE|wxTE_WORDWRAP|wxSUNKEN_BORDER );
	m_textCtrl6->SetMinSize( wxSize( 300,120 ) );
	
	bSizer17->Add( m_textCtrl6, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizer20->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_button4 = new wxButton( this, wxID_ANY, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( m_button4, 0, wxALL, 5 );
	
	m_button5 = new wxButton( this, wxID_ANY, wxT("Report"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( m_button5, 0, wxALL, 5 );
	
	bSizer17->Add( bSizer20, 0, wxEXPAND, 5 );
	
	this->SetSizer( bSizer17 );
	this->Layout();
	bSizer17->Fit( this );
}

MyDialog2::~MyDialog2()
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
	
	m_textCtrl4 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 350,-1 ), 0 );
	m_textCtrl4->SetMinSize( wxSize( 350,-1 ) );
	
	bSizer8->Add( m_textCtrl4, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_bpButton3 = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("icons\\magnifier.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	bSizer8->Add( m_bpButton3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	bSizer7->Add( bSizer8, 0, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer1;
	sbSizer1 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Search Results") ), wxVERTICAL );
	
	m_grid1 = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxSize( 400,-1 ), 0 );
	
	// Grid
	m_grid1->CreateGrid( 4, 5 );
	m_grid1->EnableEditing( true );
	m_grid1->EnableGridLines( true );
	m_grid1->EnableDragGridSize( false );
	m_grid1->SetMargins( 0, 0 );
	
	// Columns
	m_grid1->SetColSize( 0, 124 );
	m_grid1->SetColSize( 1, 97 );
	m_grid1->SetColSize( 2, 32 );
	m_grid1->SetColSize( 3, 33 );
	m_grid1->SetColSize( 4, 31 );
	m_grid1->AutoSizeColumns();
	m_grid1->EnableDragColMove( true );
	m_grid1->EnableDragColSize( true );
	m_grid1->SetColLabelSize( 30 );
	m_grid1->SetColLabelValue( 0, wxT("Part Number") );
	m_grid1->SetColLabelValue( 1, wxT("Item Name") );
	m_grid1->SetColLabelValue( 2, wxT("Description") );
	m_grid1->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	m_grid1->EnableDragRowSize( true );
	m_grid1->SetRowLabelSize( 80 );
	m_grid1->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	m_grid1->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	m_grid1->SetMinSize( wxSize( 400,-1 ) );
	
	sbSizer1->Add( m_grid1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );
	
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
}

MyDialog21::~MyDialog21()
{
}
