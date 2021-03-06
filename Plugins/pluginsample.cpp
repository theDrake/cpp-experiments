// pluginsample.cpp : Defines class behaviors for the application.

#include "stdafx.h"
#include "pluginsample.h"
#include "MainFrame.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// PluginSample

BEGIN_MESSAGE_MAP(PluginSample, CWinApp)
  //{{AFX_MSG_MAP(PluginSample)
  ON_COMMAND(ID_APP_ABOUT, OnAppAbout)
  //}}AFX_MSG_MAP
END_MESSAGE_MAP()

PluginSample::PluginSample() {}

PluginSample theApp;  // The one and only PluginSample object.

BOOL PluginSample::InitInstance() {
#ifdef _AFXDLL
  Enable3dControls();  // Call this when using MFC in a shared DLL
#else
  Enable3dControlsStatic();  // Call this when linking to MFC statically
#endif

  MainFrame* pFrame = new MainFrame;
  m_pMainWnd = pFrame;

  // create and load the frame with its resources

  pFrame->LoadFrame(IDR_MAINFRAME,
    WS_OVERLAPPEDWINDOW | FWS_ADDTOTITLE, NULL,
    NULL);



  pFrame->ShowWindow(SW_SHOW);
  pFrame->UpdateWindow();

  return TRUE;
}

// PluginSample message handlers

// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog {
 public:
  CAboutDlg();

  // Dialog Data
  //{{AFX_DATA(CAboutDlg)
  enum { IDD = IDD_ABOUTBOX };
  //}}AFX_DATA

  //{{AFX_VIRTUAL(CAboutDlg)
 protected:
  virtual void DoDataExchange(CDataExchange *pDX);  // DDX/DDV support
  //}}AFX_VIRTUAL

  // Implementation
 protected:
  //{{AFX_MSG(CAboutDlg)
    // No message handlers
  //}}AFX_MSG
  DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD) {
  //{{AFX_DATA_INIT(CAboutDlg)
  //}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange *pDX) {
  CDialog::DoDataExchange(pDX);
  //{{AFX_DATA_MAP(CAboutDlg)
  //}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
  //{{AFX_MSG_MAP(CAboutDlg)
    // No message handlers
  //}}AFX_MSG_MAP
END_MESSAGE_MAP()

// App command to run the dialog
void PluginSample::OnAppAbout() {
  CAboutDlg aboutDlg;
  aboutDlg.DoModal();
}

// PluginSample message handlers
