// DlgC.cpp : implementation file
//

#include "stdafx.h"
#include "QiuHe.h"
#include "DlgC.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDlgC dialog


CDlgC::CDlgC(CWnd* pParent /*=NULL*/)
	: CDialog(CDlgC::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDlgC)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CDlgC::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDlgC)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDlgC, CDialog)
	//{{AFX_MSG_MAP(CDlgC)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDlgC message handlers
