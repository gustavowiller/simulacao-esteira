///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Feb 17 2007)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif //WX_PRECOMP

#include "GUIFrame.h"

wxButton *btnStart;
wxButton *btnStop;
wxBitmap *bmpLed;
wxImage *imgLed;


wxButton *btnLed;

enum
{
  BUTTON_Hello = wxID_HIGHEST + 1 // declares an id which will be used to call our button
};


///////////////////////////////////////////////////////////////////////////
BEGIN_EVENT_TABLE( GUIFrame, wxFrame )
    EVT_CLOSE( GUIFrame::_wxFB_OnClose )
    EVT_MENU( idMenuQuit, GUIFrame::_wxFB_OnQuit )
    EVT_MENU( idMenuAbout, GUIFrame::_wxFB_OnAbout )
    EVT_BUTTON ( BUTTON_Hello, GUIFrame::_wxFB_OnQuit ) // Tell the OS to run MainFrame::OnExit when

END_EVENT_TABLE()

GUIFrame::GUIFrame( wxWindow* parent, int id, wxString title, wxPoint pos, wxSize size, int style ) : wxFrame( parent, id, title, pos, size, style )
{
    this->SetSizeHints( wxDefaultSize, wxDefaultSize );

    mbar = new wxMenuBar( 0 );
    wxMenu* fileMenu;
    fileMenu = new wxMenu();
    wxMenuItem* menuFileQuit = new wxMenuItem( fileMenu, idMenuQuit, wxString( wxT("&Quit") ) + wxT('\t') + wxT("Alt+F4"), wxT("Quit the application"), wxITEM_NORMAL );
    fileMenu->Append( menuFileQuit );
    mbar->Append( fileMenu, wxT("&File") );
    wxMenu* helpMenu;
    helpMenu = new wxMenu();
    wxMenuItem* menuHelpAbout = new wxMenuItem( helpMenu, idMenuAbout, wxString( wxT("&About") ) + wxT('\t') + wxT("F1"), wxT("Show info about this application"), wxITEM_NORMAL );
    helpMenu->Append( menuHelpAbout );
    mbar->Append( helpMenu, wxT("&Help") );
    this->SetMenuBar( mbar );

    statusBar = this->CreateStatusBar( 2, wxST_SIZEGRIP, wxID_ANY );

    //btnStart = new wxButton(this, BUTTON_Hello, _T("Start"),wxPoint(0,0), wxDefaultSize, 0);

    //btnStop = new wxButton(this, BUTTON_Hello, _T("Stop"),wxPoint(50,30), wxDefaultSize, 0);

    wxPanel

    wxBitmap bmp(wxT("/home/gustavo/Dropbox/Engenharia de Sistemas/8° Periodo/Programacao em Tempo Real/SimulacaoEsteira/images/led_off.bmp"), wxBITMAP_TYPE_BMP);
    wxStaticBitmap *sb = new wxStaticBitmap(0, -1, bmp);
        ///http://zetcode.com/gui/wxwidgets/widgetsII/

    //wxImage::LoadFile	(wxT("led_off.png") , wxBitmapType 	type = wxBITMAP_TYPE_ANY, int 	index = -1 )

}
