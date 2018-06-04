#if !defined(AFX_OBJMAPVIEW_H__ABBA26B4_6B0D_443A_AD1D_9641700852BD__INCLUDED_)
#define AFX_OBJMAPVIEW_H__ABBA26B4_6B0D_443A_AD1D_9641700852BD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ObjMapView.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CObjMapView form view

#ifndef __AFXEXT_H__
#include <afxext.h>
#endif

class CObjMapView : public CFormView
{
DECLARE_DYNCREATE(CObjMapView)
protected:
	CObjMapView();           // protected constructor used by dynamic creation	

// Form Data
public:
	//{{AFX_DATA(CObjMapView)
	enum { IDD = IDD_DOBJMAP };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CObjMapView)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CObjMapView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
	//{{AFX_MSG(CObjMapView)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_OBJMAPVIEW_H__ABBA26B4_6B0D_443A_AD1D_9641700852BD__INCLUDED_)
