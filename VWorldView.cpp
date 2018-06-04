// VWorldView.cpp : implementation of the CVWorldView class
//

#include "stdafx.h"
#include "VWorld.h"

#include "VWorldDoc.h"
#include "VWorldView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CVWorldView

IMPLEMENT_DYNCREATE(CVWorldView, CView)

BEGIN_MESSAGE_MAP(CVWorldView, CView)
	//{{AFX_MSG_MAP(CVWorldView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CVWorldView construction/destruction

CVWorldView::CVWorldView()
{
	// TODO: add construction code here

}

CVWorldView::~CVWorldView()
{
}

BOOL CVWorldView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CVWorldView drawing

void CVWorldView::OnDraw(CDC* pDC)
{
	CVWorldDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CVWorldView printing

BOOL CVWorldView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CVWorldView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CVWorldView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CVWorldView diagnostics

#ifdef _DEBUG
void CVWorldView::AssertValid() const
{
	CView::AssertValid();
}

void CVWorldView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CVWorldDoc* CVWorldView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CVWorldDoc)));
	return (CVWorldDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CVWorldView message handlers
