//
//  PROLOGUE
//  ABSTRACT
//    Classification
//      UNCLASSIFIED
// 
//    Name
//      APPSITESTATUS StdAfx include file
//   
//    Identifier
//      Filename:  StdAfx.h
//   
//    Contract Identifier
//      ISC2 (Integrated Space Command and Control)
//  
//    Purpose
//      Include file for standard system include files, or project specific 
//      include files that are used frequently, but are changed infrequently.
//   
//  DESCRIPTION
//    Error Codes Returned/Exceptions Raised
//      (1)  None
//   
//  NOTES
//    Design Constraints
//      None.
//   
//    Special Processing
//      None.
//   
//    Side Effects
//      None.
//   
//    Performance Issues
//      None.
//   
//    Limitations
//      None.
//   
//    Target Dependencies
//      None.
//   
//    Compiler Dependencies
//      None.
//   
//  LAST REVISION
//      Date       DR Number    Login        Modification
//      =========  ===========  ===========  ======================
//      23-JAN-04  SMR0010152   dfritz       Created.
//-----------------------------------------------------------------------------
// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__465B478E_82EA_4EB5_A29C_99C9A3C120E2__INCLUDED_)
#define AFX_STDAFX_H__465B478E_82EA_4EB5_A29C_99C9A3C120E2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define VC_EXTRALEAN        // Exclude rarely-used stuff from Windows headers

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions

#ifndef _AFX_NO_OLE_SUPPORT
#include <afxole.h>         // MFC OLE classes
#include <afxodlgs.h>       // MFC OLE dialog classes
#include <afxdisp.h>        // MFC Automation classes
#endif // _AFX_NO_OLE_SUPPORT


#ifndef _AFX_NO_DB_SUPPORT
#include <afxdb.h>          // MFC ODBC database classes
#endif // _AFX_NO_DB_SUPPORT

#ifndef _AFX_NO_DAO_SUPPORT
#include <afxdao.h>         // MFC DAO database classes
#endif // _AFX_NO_DAO_SUPPORT

#include <afxdtctl.h>       // MFC support for Internet Explorer 4 Common Controls
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>         // MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT


//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__465B478E_82EA_4EB5_A29C_99C9A3C120E2__INCLUDED_)
