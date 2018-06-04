// VWorldDoc.cpp : implementation of the CVWorldDoc class
//

#include "stdafx.h"
#include "VWorld.h"

#include "VWorldDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CVWorldDoc

IMPLEMENT_DYNCREATE(CVWorldDoc, CDocument)

BEGIN_MESSAGE_MAP(CVWorldDoc, CDocument)
	//{{AFX_MSG_MAP(CVWorldDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CVWorldDoc construction/destruction

CVWorldDoc::CVWorldDoc()
{
	// TODO: add one-time construction code here

}

CVWorldDoc::~CVWorldDoc()
{
}

BOOL CVWorldDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CVWorldDoc serialization

void CVWorldDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CVWorldDoc diagnostics

#ifdef _DEBUG
void CVWorldDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CVWorldDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CVWorldDoc commands
