// QiuHeDoc.cpp : implementation of the CQiuHeDoc class
//

#include "stdafx.h"
#include "QiuHe.h"

#include "QiuHeDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CQiuHeDoc

IMPLEMENT_DYNCREATE(CQiuHeDoc, CDocument)

BEGIN_MESSAGE_MAP(CQiuHeDoc, CDocument)
	//{{AFX_MSG_MAP(CQiuHeDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CQiuHeDoc construction/destruction

CQiuHeDoc::CQiuHeDoc()
{
	// TODO: add one-time construction code here

}

CQiuHeDoc::~CQiuHeDoc()
{
}

BOOL CQiuHeDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CQiuHeDoc serialization

void CQiuHeDoc::Serialize(CArchive& ar)
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
// CQiuHeDoc diagnostics

#ifdef _DEBUG
void CQiuHeDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CQiuHeDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CQiuHeDoc commands
