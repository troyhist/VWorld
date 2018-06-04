#if !defined(AFX_OBJLISTVIEW_H__224406AC_DEBA_4426_9E2B_A49A90B95036__INCLUDED_)
#define AFX_OBJLISTVIEW_H__224406AC_DEBA_4426_9E2B_A49A90B95036__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ObjListView.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CObjListView form view

#ifndef __AFXEXT_H__
#include <afxext.h>
#endif

class CObjListView : public CFormView
{
protected:
	CObjListView();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CObjListView)

// Form Data
public:
	//{{AFX_DATA(CObjListView)
	enum { IDD = IDD_DOBJLIST };
	CListCtrl	m_lcObjList;
	//}}AFX_DATA

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CObjListView)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CObjListView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
	//{{AFX_MSG(CObjListView)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_OBJLISTVIEW_H__224406AC_DEBA_4426_9E2B_A49A90B95036__INCLUDED_)
