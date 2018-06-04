#if !defined(AFX_EXSPLITTERWND_H__6ECED23E_8C9A_49BD_A760_0BF893386BD4__INCLUDED_)
#define AFX_EXSPLITTERWND_H__6ECED23E_8C9A_49BD_A760_0BF893386BD4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ExSplitterWnd.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CExSplitterWnd frame with splitter

#ifndef __AFXEXT_H__
#include <afxext.h>
#endif

class CExSplitterWnd : public CSplitterWnd
{
	DECLARE_DYNCREATE(CExSplitterWnd)
	CExSplitterWnd();           // protected constructor used by dynamic creation

// Attributes
protected:	

private:

// Attributes
public:

// Operations
public:
	
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CExSplitterWnd)
	protected:
	//virtual BOOL OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CExSplitterWnd();

	// Generated message map functions
	//{{AFX_MSG(CExSplitterWnd)
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EXSPLITTERWND_H__6ECED23E_8C9A_49BD_A760_0BF893386BD4__INCLUDED_)
