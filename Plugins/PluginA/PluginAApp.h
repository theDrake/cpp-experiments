// PluginAApp.h : main header file for the PluginA DLL

#ifndef AFX_PluginA_H__58DF3362_968E_4C4F_89EB_F8A60CDA6CA9__INCLUDED_
#define AFX_PluginA_H__58DF3362_968E_4C4F_89EB_F8A60CDA6CA9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif  // _MSC_VER > 1000

#ifndef __AFXWIN_H__
#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"

// CPluginAApp

class CPluginAApp : public CWinApp {
 public:
  CPluginAApp();

  // Overrides
  //{{AFX_VIRTUAL(CPluginAApp)
  //}}AFX_VIRTUAL

  //{{AFX_MSG(CPluginAApp)
  //}}AFX_MSG
  DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}

#endif  // AFX_PluginA_H__58DF3362_968E_4C4F_89EB_F8A60CDA6CA9__INCLUDED_
