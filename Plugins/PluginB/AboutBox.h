// AboutBox.h

#ifndef AFX_ABOUTBOX_H__2DEA5D1D_4989_4A93_8C30_F21D72313B00__INCLUDED_
#define AFX_ABOUTBOX_H__2DEA5D1D_4989_4A93_8C30_F21D72313B00__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif  // _MSC_VER > 1000

#include "resource.h"

// AboutBox dialog

class AboutBox : public CDialog {
 public:
  AboutBox(CWnd *pParent = NULL);

  // Dialog Data
  //{{AFX_DATA(AboutBox)
  enum {IDD = IDD_ABOUTBOX};
  //}}AFX_DATA

  // Overrides
  //{{AFX_VIRTUAL(AboutBox)
 protected:
  virtual void DoDataExchange(CDataExchange* pDX);  // DDX/DDV support
  //}}AFX_VIRTUAL

  // Implementation
 protected:
  //{{AFX_MSG(AboutBox)
  //}}AFX_MSG
  DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}

#endif  // AFX_ABOUTBOX_H__2DEA5D1D_4989_4A93_8C30_F21D72313B00__INCLUDED_
