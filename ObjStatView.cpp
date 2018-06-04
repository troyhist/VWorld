// ObjStatView.cpp : implementation file
//

#include "stdafx.h"
#include "VWorld.h"
#include "ObjStatView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CObjStatView

IMPLEMENT_DYNCREATE(CObjStatView, CFormView)

CObjStatView::CObjStatView()
	: CFormView(CObjStatView::IDD)
{
	//{{AFX_DATA_INIT(CObjStatView)
	m_sObjStat = _T("");
	//}}AFX_DATA_INIT
}

CObjStatView::~CObjStatView()
{
}

void CObjStatView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CObjStatView)
	DDX_Text(pDX, IDC_ESTATUS, m_sObjStat);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CObjStatView, CFormView)
	//{{AFX_MSG_MAP(CObjStatView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CObjStatView diagnostics

#ifdef _DEBUG
void CObjStatView::AssertValid() const
{
	CFormView::AssertValid();
}

void CObjStatView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CObjStatView message handlers
