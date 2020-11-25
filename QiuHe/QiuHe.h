// QiuHe.h : main header file for the QIUHE application
//

#if !defined(AFX_QIUHE_H__A9A9B8A0_8C6F_4220_9A20_6EE0BB111CEA__INCLUDED_)
#define AFX_QIUHE_H__A9A9B8A0_8C6F_4220_9A20_6EE0BB111CEA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CQiuHeApp:
// See QiuHe.cpp for the implementation of this class
//

class CQiuHeApp : public CWinApp
{
public:
	CQiuHeApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CQiuHeApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CQiuHeApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_QIUHE_H__A9A9B8A0_8C6F_4220_9A20_6EE0BB111CEA__INCLUDED_)
