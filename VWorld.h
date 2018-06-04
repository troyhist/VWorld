// VWorld.h : main header file for the VWORLD application
//

#if !defined(AFX_VWORLD_H__D5548699_EF27_471F_9D25_F4A14FFA46E9__INCLUDED_)
#define AFX_VWORLD_H__D5548699_EF27_471F_9D25_F4A14FFA46E9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CVWorldApp:
// See VWorld.cpp for the implementation of this class
//

class CVWorldApp : public CWinApp
{
public:
	CVWorldApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CVWorldApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CVWorldApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VWORLD_H__D5548699_EF27_471F_9D25_F4A14FFA46E9__INCLUDED_)
