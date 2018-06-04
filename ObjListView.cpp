// ObjListView.cpp : implementation file
//

#include "stdafx.h"
#include "VWorld.h"
#include "ObjListView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CObjListView

IMPLEMENT_DYNCREATE(CObjListView, CFormView)

CObjListView::CObjListView()
	: CFormView(CObjListView::IDD)
{
	//{{AFX_DATA_INIT(CObjListView)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}

CObjListView::~CObjListView()
{
}

void CObjListView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CObjListView)
	DDX_Control(pDX, IDC_LOBJLIST, m_lcObjList);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CObjListView, CFormView)
	//{{AFX_MSG_MAP(CObjListView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CObjListView diagnostics

#ifdef _DEBUG
void CObjListView::AssertValid() const
{
	CFormView::AssertValid();
}

void CObjListView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CObjListView message handlers
