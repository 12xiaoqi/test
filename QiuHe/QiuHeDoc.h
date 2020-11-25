// QiuHeDoc.h : interface of the CQiuHeDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_QIUHEDOC_H__0803914B_6C15_47CA_A23F_098066681C3D__INCLUDED_)
#define AFX_QIUHEDOC_H__0803914B_6C15_47CA_A23F_098066681C3D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CQiuHeDoc : public CDocument
{
protected: // create from serialization only
	CQiuHeDoc();
	DECLARE_DYNCREATE(CQiuHeDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CQiuHeDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CQiuHeDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CQiuHeDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_QIUHEDOC_H__0803914B_6C15_47CA_A23F_098066681C3D__INCLUDED_)
