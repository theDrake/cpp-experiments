// AboutBox.cpp

#include "stdafx.h"
#include "PluginB.h"
#include "AboutBox.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// AboutBox dialog

AboutBox::AboutBox(CWnd *pParent /*=NULL*/) : CDialog(AboutBox::IDD, pParent) {
  //{{AFX_DATA_INIT(AboutBox)
  //}}AFX_DATA_INIT
}

void AboutBox::DoDataExchange(CDataExchange *pDX) {
  CDialog::DoDataExchange(pDX);
  //{{AFX_DATA_MAP(AboutBox)
  //}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(AboutBox, CDialog)
  //{{AFX_MSG_MAP(AboutBox)
  //}}AFX_MSG_MAP
END_MESSAGE_MAP()

// AboutBox message handlers
