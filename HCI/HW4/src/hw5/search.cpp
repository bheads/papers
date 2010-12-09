///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec 21 2009)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "search.h"

///////////////////////////////////////////////////////////////////////////

MyDialog1::MyDialog1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText1 = new wxStaticText( this, wxID_ANY, wxT("Search For"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer2->Add( m_staticText1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_textCtrl1 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 300,-1 ), 0 );
	bSizer2->Add( m_textCtrl1, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_comboBox1 = new wxComboBox( this, wxID_ANY, wxT("Any"), wxDefaultPosition, wxSize( 170,-1 ), 0, NULL, 0 );
	m_comboBox1->Append( wxT("Any") );
	m_comboBox1->Append( wxT("Cleaning Supplies") );
	m_comboBox1->Append( wxT("Equipment") );
	m_comboBox1->Append( wxT("Medical Instrament ") );
	m_comboBox1->Append( wxT("Medical Supplies") );
	m_comboBox1->Append( wxT("Medication") );
	m_comboBox1->Append( wxT("Office Supplies") );
	m_comboBox1->Append( wxT("Other") );
	bSizer2->Add( m_comboBox1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_bpButton1 = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("icons/find.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	bSizer2->Add( m_bpButton1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	bSizer1->Add( bSizer2, 0, wxEXPAND|wxALL, 5 );
	
	m_scrolledWindow1 = new wxScrolledWindow( this, wxID_ANY, wxDefaultPosition, wxSize( 200,-1 ), wxHSCROLL|wxVSCROLL );
	m_scrolledWindow1->SetScrollRate( 5, 5 );
	m_scrolledWindow1->SetMinSize( wxSize( -1,200 ) );
	m_scrolledWindow1->SetMaxSize( wxSize( -1,200 ) );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );
	
	m_grid1 = new wxGrid( m_scrolledWindow1, wxID_ANY, wxDefaultPosition, wxSize( -1,200 ), 0 );
	
	// Grid
	m_grid1->CreateGrid( 2, 7 );
	m_grid1->EnableEditing( true );
	m_grid1->EnableGridLines( true );
	m_grid1->EnableDragGridSize( false );
	m_grid1->SetMargins( 0, 0 );
	
	// Columns
	m_grid1->SetColSize( 0, 48 );
	m_grid1->SetColSize( 1, 100 );
	m_grid1->SetColSize( 2, 103 );
	m_grid1->SetColSize( 3, 80 );
	m_grid1->SetColSize( 4, 80 );
	m_grid1->SetColSize( 5, 101 );
	m_grid1->SetColSize( 6, 80 );
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
	m_grid1->AutoSizeRows();
	m_grid1->EnableDragRowSize( true );
	m_grid1->SetRowLabelSize( 80 );
	m_grid1->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	m_grid1->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	m_grid1->SetMinSize( wxSize( -1,200 ) );
	m_grid1->SetMaxSize( wxSize( -1,200 ) );
	
	bSizer3->Add( m_grid1, 1, wxEXPAND, 5 );
	
	m_scrolledWindow1->SetSizer( bSizer3 );
	m_scrolledWindow1->Layout();
	bSizer1->Add( m_scrolledWindow1, 1, wxEXPAND|wxALL, 5 );
	
	this->SetSizer( bSizer1 );
	this->Layout();
	bSizer1->Fit( this );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MyDialog1::Event_OnClose ) );
}

MyDialog1::~MyDialog1()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MyDialog1::Event_OnClose ) );
}
