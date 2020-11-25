// QiuHeView.cpp : implementation of the CQiuHeView class
//

#include "stdafx.h"
#include "QiuHe.h"

#include "QiuHeDoc.h"
#include "QiuHeView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CQiuHeView

IMPLEMENT_DYNCREATE(CQiuHeView, CView)

BEGIN_MESSAGE_MAP(CQiuHeView, CView)
	//{{AFX_MSG_MAP(CQiuHeView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CQiuHeView construction/destruction

CQiuHeView::CQiuHeView()
{
	// TODO: add construction code here

}

CQiuHeView::~CQiuHeView()
{
}

BOOL CQiuHeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CQiuHeView drawing

void CQiuHeView::OnDraw(CDC* pDC)
{
	CQiuHeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CQiuHeView printing

BOOL CQiuHeView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CQiuHeView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CQiuHeView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CQiuHeView diagnostics

#ifdef _DEBUG
void CQiuHeView::AssertValid() const
{
	CView::AssertValid();
}

void CQiuHeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CQiuHeDoc* CQiuHeView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CQiuHeDoc)));
	return (CQiuHeDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CQiuHeView message handlers
