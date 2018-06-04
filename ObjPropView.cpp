// ObjPropView.cpp : implementation file
//

#include "stdafx.h"
#include "VWorld.h"
#include "ObjPropView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CObjPropViewdialog

IMPLEMENT_DYNCREATE(CObjPropView, CFormView)
// =======================================================================

CObjPropView::CObjPropView()
	: CFormView(CObjPropView::IDD)
{
	//{{AFX_DATA_INIT(CObjPropView)
	m_sName = _T("");
	m_sID = _T("");
	//}}AFX_DATA_INIT
}


void CObjPropView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CObjPropView)
	DDX_Text(pDX, IDC_ENAME, m_sName);
	DDX_Text(pDX, IDC_EID, m_sID);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CObjPropView, CFormView)
	//{{AFX_MSG_MAP(CObjPropView)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CObjPropViewmessage handlers
