#if !defined(AFX_OBJPROPDLG_H__5603E04D_7FAE_446C_B6D0_94EEA05766D7__INCLUDED_)
#define AFX_OBJPROPDLG_H__5603E04D_7FAE_446C_B6D0_94EEA05766D7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ObjPropView.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CObjPropView dialog

class CObjPropView: public CFormView
{
DECLARE_DYNCREATE(CObjPropView)
// Construction
protected:
	CObjPropView();   // standard constructor

// Dialog Data
	//{{AFX_DATA(CObjPropView)
	enum { IDD = IDD_DOBJPROP };
	CString	m_sName;
	CString	m_sID;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CObjPropView)	
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CObjPropView)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_OBJPROPDLG_H__5603E04D_7FAE_446C_B6D0_94EEA05766D7__INCLUDED_)
