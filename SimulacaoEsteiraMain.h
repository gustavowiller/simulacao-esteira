/***************************************************************
 * Name:      SimulacaoEsteiraMain.h
 * Purpose:   Defines Application Frame
 * Author:    Gustavo Willer (gustavo.willer@hotmail.com)
 * Created:   2017-03-30
 * Copyright: Gustavo Willer ()
 * License:
 **************************************************************/

#ifndef SIMULACAOESTEIRAMAIN_H
#define SIMULACAOESTEIRAMAIN_H



#include "SimulacaoEsteiraApp.h"


#include "GUIFrame.h"

class SimulacaoEsteiraFrame: public GUIFrame
{
    public:
        SimulacaoEsteiraFrame(wxFrame *frame);
        ~SimulacaoEsteiraFrame();
    private:
        virtual void OnClose(wxCloseEvent& event);
        virtual void OnQuit(wxCommandEvent& event);
        virtual void OnAbout(wxCommandEvent& event);
};

#endif // SIMULACAOESTEIRAMAIN_H
