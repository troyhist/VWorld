// VWorldDoc.h : interface of the CVWorldDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_VWORLDDOC_H__1D9168DA_3E29_436A_9636_04C7CB6A4991__INCLUDED_)
#define AFX_VWORLDDOC_H__1D9168DA_3E29_436A_9636_04C7CB6A4991__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CVWorldDoc : public CDocument
{
protected: // create from serialization only
	CVWorldDoc();
	DECLARE_DYNCREATE(CVWorldDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CVWorldDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CVWorldDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CVWorldDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VWORLDDOC_H__1D9168DA_3E29_436A_9636_04C7CB6A4991__INCLUDED_)
