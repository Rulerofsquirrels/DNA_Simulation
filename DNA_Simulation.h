
// DNA_Simulation.h : main header file for the DNA_Simulation application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CDNA_SimulationApp:
// See DNA_Simulation.cpp for the implementation of this class
//

class CDNA_SimulationApp : public CWinApp
{
public:
	CDNA_SimulationApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDNA_SimulationApp theApp;
