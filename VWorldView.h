// VWorldView.h : interface of the CVWorldView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_VWORLDVIEW_H__8C00E446_5A9B_4E70_9CB3_7EEB6618241D__INCLUDED_)
#define AFX_VWORLDVIEW_H__8C00E446_5A9B_4E70_9CB3_7EEB6618241D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CVWorldView : public CView
{
protected: // create from serialization only
	CVWorldView();
	DECLARE_DYNCREATE(CVWorldView)

// Attributes
public:
	CVWorldDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CVWorldView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CVWorldView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CVWorldView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in VWorldView.cpp
inline CVWorldDoc* CVWorldView::GetDocument()
   { return (CVWorldDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VWORLDVIEW_H__8C00E446_5A9B_4E70_9CB3_7EEB6618241D__INCLUDED_)
