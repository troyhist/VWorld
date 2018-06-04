#if !defined(AFX_OBJSTATVIEW_H__E3F98BFA_B9BC_487B_BA4F_B83F56CB379E__INCLUDED_)
#define AFX_OBJSTATVIEW_H__E3F98BFA_B9BC_487B_BA4F_B83F56CB379E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ObjStatView.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CObjStatView form view

#ifndef __AFXEXT_H__
#include <afxext.h>
#endif

class CObjStatView : public CFormView
{
protected:
	CObjStatView();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CObjStatView)

// Form Data
public:
	//{{AFX_DATA(CObjStatView)
	enum { IDD = IDD_DOBJSTAT };
	CString	m_sObjStat;
	//}}AFX_DATA

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CObjStatView)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CObjStatView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
	//{{AFX_MSG(CObjStatView)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_OBJSTATVIEW_H__E3F98BFA_B9BC_487B_BA4F_B83F56CB379E__INCLUDED_)
