// QiuHeView.h : interface of the CQiuHeView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_QIUHEVIEW_H__6465EC66_8EE1_4679_91EA_7FBECDDE3294__INCLUDED_)
#define AFX_QIUHEVIEW_H__6465EC66_8EE1_4679_91EA_7FBECDDE3294__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CQiuHeView : public CView
{
protected: // create from serialization only
	CQiuHeView();
	DECLARE_DYNCREATE(CQiuHeView)

// Attributes
public:
	CQiuHeDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CQiuHeView)
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
	virtual ~CQiuHeView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CQiuHeView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in QiuHeView.cpp
inline CQiuHeDoc* CQiuHeView::GetDocument()
   { return (CQiuHeDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_QIUHEVIEW_H__6465EC66_8EE1_4679_91EA_7FBECDDE3294__INCLUDED_)
