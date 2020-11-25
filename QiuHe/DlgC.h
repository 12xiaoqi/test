#if !defined(AFX_DLGC_H__C316D67A_260B_4C37_88CC_1B79B88795B4__INCLUDED_)
#define AFX_DLGC_H__C316D67A_260B_4C37_88CC_1B79B88795B4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DlgC.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDlgC dialog

class CDlgC : public CDialog
{
// Construction
public:
	CDlgC(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDlgC)
	enum { IDD = IDD_DIG_Calc };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDlgC)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDlgC)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLGC_H__C316D67A_260B_4C37_88CC_1B79B88795B4__INCLUDED_)
