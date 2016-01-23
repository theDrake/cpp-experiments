// PluginB.h : main header file for the PLUGINB DLL

#ifndef AFX_PLUGINB_H__58DF3362_968E_4C4F_89EB_F8A60CDA6CA9__INCLUDED_
#define AFX_PLUGINB_H__58DF3362_968E_4C4F_89EB_F8A60CDA6CA9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif  // _MSC_VER > 1000

#ifndef __AFXWIN_H__
#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"

// CPluginBApp

class CPluginBApp : public CWinApp {
 public:
  CPluginBApp();

  // Overrides
  //{{AFX_VIRTUAL(CPluginBApp)
  //}}AFX_VIRTUAL

  //{{AFX_MSG(CPluginBApp)
  //}}AFX_MSG
  DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}

#endif  // AFX_PLUGINB_H__58DF3362_968E_4C4F_89EB_F8A60CDA6CA9__INCLUDED_
