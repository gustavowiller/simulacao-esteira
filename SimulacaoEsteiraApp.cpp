/***************************************************************
 * Name:      SimulacaoEsteiraApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Gustavo Willer (gustavo.willer@hotmail.com)
 * Created:   2017-03-30
 * Copyright: Gustavo Willer ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "SimulacaoEsteiraApp.h"
#include "SimulacaoEsteiraMain.h"

IMPLEMENT_APP(SimulacaoEsteiraApp);






bool SimulacaoEsteiraApp::OnInit()
{
    SimulacaoEsteiraFrame* frame = new SimulacaoEsteiraFrame(0L);

    frame->Show();

    return true;
}
