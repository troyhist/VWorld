// ObjMapView.cpp : implementation file
//

#include "stdafx.h"
#include "VWorld.h"
#include "ObjMapView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CObjMapView

IMPLEMENT_DYNCREATE(CObjMapView, CFormView)

CObjMapView::CObjMapView()
	: CFormView(CObjMapView::IDD)
{
	//{{AFX_DATA_INIT(CObjMapView)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}

CObjMapView::~CObjMapView()
{
}

void CObjMapView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CObjMapView)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CObjMapView, CFormView)
	//{{AFX_MSG_MAP(CObjMapView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CObjMapView diagnostics

#ifdef _DEBUG
void CObjMapView::AssertValid() const
{
	CFormView::AssertValid();
}

void CObjMapView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CObjMapView message handlers
