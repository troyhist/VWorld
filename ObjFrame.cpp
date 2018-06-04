// =======================================================================
// VirtualWorld GUI ver. 1.0 (CPP)
// -----------------------------------------------------------------------
// VW Main Frame.
// Used library: <none>
// -----------------------------------------------------------------------
// File: ObjFrame.cpp
// -----------------------------------------------------------------------
//     Compiler: Visual C++ 6.0
//  Application: Win32 GUI
// -----------------------------------------------------------------------
// Made date: 29/ 07.2002
// Last edit: 30/ 07.2002
//     Build: 1
// =======================================================================
// ObjFrame.cpp : implementation file
// =======================================================================
#include "stdafx.h"
#include "VWorld.h"
#include "ObjFrame.h"
// =======================================================================
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// =======================================================================
// CObjFrame
// =======================================================================
IMPLEMENT_DYNCREATE(CObjFrame, CMDIChildWnd)
// =======================================================================
CObjFrame::CObjFrame()
{
	m_pObjPropView=NULL;
	m_pObjListView=NULL;
	m_pObjMapView=NULL;
	m_pObjStatView=NULL;
}
// =======================================================================
CObjFrame::~CObjFrame()
{
}
// =======================================================================
BEGIN_MESSAGE_MAP(CObjFrame, CMDIChildWnd)
	//{{AFX_MSG_MAP(CObjFrame)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()
// =======================================================================
// CObjFrame message handlers
// =======================================================================
BOOL CObjFrame::OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext) 
{
// -----------------------------------------------------------------------
// Description: creates 4 different views 
//   Parametrs: ...
//      Return: ...
// -----------------------------------------------------------------------
//			MD: 29.07.2002
//			LE: 30.07.2002
// -----------------------------------------------------------------------
if (!m_theSplitterV.CreateStatic(this, 1, 2))
	{
	TRACE0("Failed to CreateStaticSplitter\n");
	return(false);
	}
// -----------------------------------------------------------------------
if (!m_theSplitterHL.CreateStatic(
	&m_theSplitterV,					// our parent window is the first splitter
	2, 1,								// the new splitter is 2 rows, 1 column
	WS_CHILD | WS_VISIBLE | WS_BORDER,  // style, WS_BORDER is needed
	m_theSplitterV.IdFromRowCol(0, 0)	// new splitter is in the first row, first column of first splitter
   ))
	{
	TRACE0("Failed to create left horisontal splitter\n");
	return(false);
	}
// -----------------------------------------------------------------------
if (!m_theSplitterHR.CreateStatic(
	&m_theSplitterV,					// our parent window is the first splitter
	2, 1,								// the new splitter is 2 rows, 1 column
	WS_CHILD | WS_VISIBLE | WS_BORDER,  // style, WS_BORDER is needed
	m_theSplitterV.IdFromRowCol(0, 1)	// new splitter is in the first row, first column of first splitter
   ))
	{
	TRACE0("Failed to create right horisontal splitter\n");
	return(false);
	}
// -----------------------------------------------------------------------
m_theSplitterHL.CreateView (0, 0, RUNTIME_CLASS(CObjMapView), 
	CSize(lpcs->cx/2, lpcs->cy/2), pContext);
m_pObjMapView = (CObjMapView*)m_theSplitterHL.GetPane (0, 0);
// -----------------------------------------------------------------------
m_theSplitterHL.CreateView (1, 0, RUNTIME_CLASS(CObjStatView), 
	CSize(lpcs->cx/2, lpcs->cy/2), pContext);
m_pObjStatView = (CObjStatView*)m_theSplitterHL.GetPane (1, 0);
// -----------------------------------------------------------------------
m_theSplitterHR.CreateView (0, 0, RUNTIME_CLASS(CObjPropView), 
	CSize(lpcs->cx/2, lpcs->cy/2), pContext);
m_pObjPropView = (CObjPropView*)m_theSplitterHR.GetPane (0, 0);
// -----------------------------------------------------------------------
m_theSplitterHR.CreateView (1, 0, RUNTIME_CLASS(CObjListView), 
	CSize(lpcs->cx/2, lpcs->cy/2), pContext);
m_pObjListView = (CObjListView*)m_theSplitterHR.GetPane (1, 0);
// -----------------------------------------------------------------------
m_theSplitterV.SetActivePane(0,0);
// -----------------------------------------------------------------------
return CMDIChildWnd::OnCreateClient(lpcs, pContext);
}
// =======================================================================