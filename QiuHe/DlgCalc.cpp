// DlgCalc.cpp : implementation file
//

#include "stdafx.h"
#include "QiuHe.h"
#include "DlgCalc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDlgCalc dialog


CDlgCalc::CDlgCalc(CWnd* pParent /*=NULL*/)
	: CDialog(CDlgCalc::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDlgCalc)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CDlgCalc::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDlgCalc)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDlgCalc, CDialog)
	//{{AFX_MSG_MAP(CDlgCalc)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDlgCalc message handlers
