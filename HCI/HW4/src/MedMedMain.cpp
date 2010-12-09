#include "MedMedMain.h"

MedMedMain::MedMedMain( wxWindow* parent )
:
MedMain( parent )
{

    m_grid1->SetCellValue( 0, 0, wxT("124") );
    m_grid1->SetCellValue( 0, 1, wxT("Mop") );
    m_grid1->SetCellValue( 0, 2, wxT("Mop used to clean the floors") );
    m_grid1->SetCellValue( 0, 3, wxT("Cleaning Supplies") );
    m_grid1->SetCellValue( 0, 4, wxT("2") );
    m_grid1->SetCellValue( 0, 5, wxT("6/14/2010") );
    m_grid1->SetCellValue( 0, 6, wxT("NO") );
    
    m_grid1->SetCellValue( 1, 0, wxT("224") );
    m_grid1->SetCellValue( 1, 1, wxT("Mop") );
    m_grid1->SetCellValue( 1, 2, wxT("Mop used to clean the floors") );
    m_grid1->SetCellValue( 1, 3, wxT("Cleaning Supplies") );
    m_grid1->SetCellValue( 1, 4, wxT("1") );
    m_grid1->SetCellValue( 1, 5, wxT("6/14/2008") );
    m_grid1->SetCellValue( 1, 6, wxT("Yes - Handle Broke") );

}
