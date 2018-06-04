// =======================================================================
// VirtualWorld GUI ver. 1.0 (CPP)
// -----------------------------------------------------------------------
// VW Main Frame.
// Used library: <none>
// -----------------------------------------------------------------------
// File: ObjFrame.h
// -----------------------------------------------------------------------
//     Compiler: Visual C++ 6.0
//  Application: Win32 GUI
// -----------------------------------------------------------------------
// Made date: 29/ 07.2002
// Last edit: 30/ 07.2002
//     Build: 1
// =======================================================================
// ObjFrame.h : header file
// =======================================================================
#if !defined(AFX_OBJFRAME_H__C94FD0FF_A1AF_489F_8F1A_4A3275A77B58__INCLUDED_)
#define AFX_OBJFRAME_H__C94FD0FF_A1AF_489F_8F1A_4A3275A77B58__INCLUDED_
// =======================================================================
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// =======================================================================
#include "ExSplitterWnd.h"
#include "ObjPropView.h"
#include "ObjListView.h"		// Objects' list (30.07.2002)
#include "ObjMapView.h"			// Objects' map (30.07.2002)
#include "ObjStatView.h"		// Objects' statistics (30.07.2002)
// =======================================================================
// CObjFrame frame
// =======================================================================
class CObjFrame : public CMDIChildWnd
{
	DECLARE_DYNCREATE(CObjFrame)
protected:
	CObjFrame();           // protected constructor used by dynamic creation

// Attributes
public:
	//CSplitterWnd theSplitterV;
	CExSplitterWnd m_theSplitterV;	// vertical
	CExSplitterWnd m_theSplitterHL;	// horisontal left
	CExSplitterWnd m_theSplitterHR;	// horisontal right
	CObjPropView*	m_pObjPropView;
	CObjListView*	m_pObjListView;
	CObjMapView*	m_pObjMapView;
	CObjStatView*	m_pObjStatView;

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CObjFrame)
	protected:
	virtual BOOL OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext);
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CObjFrame();

	// Generated message map functions
	//{{AFX_MSG(CObjFrame)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};
// =======================================================================
//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_OBJFRAME_H__C94FD0FF_A1AF_489F_8F1A_4A3275A77B58__INCLUDED_)
// =======================================================================