// ExSplitterWnd.cpp : implementation file
//

#include "stdafx.h"
#include "VWorld.h"
#include "ExSplitterWnd.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CExSplitterWnd

//IMPLEMENT_DYNCREATE(CExSplitterWnd, CMDIChildWnd)
IMPLEMENT_DYNCREATE(CExSplitterWnd, CSplitterWnd)

CExSplitterWnd::CExSplitterWnd()
{
}

CExSplitterWnd::~CExSplitterWnd()
{
}

//BOOL CExSplitterWnd::OnCreateClient(LPCREATESTRUCT /*lpcs*/, CCreateContext* pContext)
/*BOOL CExSplitterWnd::OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext)
{
	return m_wndSplitter.Create(this,
		2, 2,       // TODO: adjust the number of rows, columns
		CSize(10, 10),  // TODO: adjust the minimum pane size
		pContext);
return CSplitterWnd::OnCreateClient(lpcs, pContext);
}*/


//BEGIN_MESSAGE_MAP(CExSplitterWnd, CMDIChildWnd)
BEGIN_MESSAGE_MAP(CExSplitterWnd, CSplitterWnd)
	//{{AFX_MSG_MAP(CExSplitterWnd)
	ON_WM_MOUSEMOVE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CExSplitterWnd message handlers

void CExSplitterWnd::OnMouseMove(UINT nFlags, CPoint point) 
{	
//if (!m_bBarLocked) 
	{ 
	int cxCur, cxMin; 
	GetColumnInfo(0, cxCur, cxMin); 
	if (point.x < 51) 
		return; 
	if (cxCur < 51)
		{ 
		SetColumnInfo(0, 50, cxMin); 
		RecalcLayout(); 
		} 
	CSplitterWnd::OnMouseMove(nFlags, point); 
	} 
//else CWnd::OnMouseMove(nFlags, point); 
	
//	CMDIChildWnd::OnMouseMove(nFlags, point);
}
