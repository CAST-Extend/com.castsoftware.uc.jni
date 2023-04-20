//
//  PROLOGUE
//  ABSTRACT
//    Classification
//      UNCLASSIFIED
// 
//    Name
//      Security Banner Service Correlation Center Header File
//   
//    Identifier
//      Filename:  APPSITESTATUS.h
//   
//    Contract Identifier
//      ISC2 (Integrated Space Command and Control)
//  
//    Purpose
//      This file defines the methods within this dll and the unique message
//      id passed from the dll to EWSBNRSecurityBannerService.
//   
//  DESCRIPTION
//    Error Codes Returned/Exceptions Raised
//      None.
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
//      23-JAN-04  SMR0010152   dfritz       Add JNI logic to subscribe to and
//                                           receive correlation center state.
//-----------------------------------------------------------------------------
// APPSITESTATUS.h : main header file for the APPSITESTATUS DLL
//

#if !defined(AFX_APPSITESTATUS_H__03029C16_04DE_449E_A53C_8DD259E397CA__INCLUDED_)
#define AFX_APPSITESTATUS_H__03029C16_04DE_449E_A53C_8DD259E397CA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
    #error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

// Unique message id between this dll and EWSBNRSecurityBannerService
#define UWM_CCSTATE_MSG "UWM_CCSTATE_MSG-DDFCA53E_F5F1_4e11_B242_84329CCBB76C"

/////////////////////////////////////////////////////////////////////////////
// CAPPSITESTATUSApp
// See APPSITESTATUS.cpp for the implementation of this class
//

class CAPPSITESTATUSApp : public CWinApp {
public:
    CAPPSITESTATUSApp();

// Overrides
    // ClassWizard generated virtual function overrides
    //{{AFX_VIRTUAL(CAPPSITESTATUSApp)
    //}}AFX_VIRTUAL

    //{{AFX_MSG(CAPPSITESTATUSApp)
        // NOTE - the ClassWizard will add and remove member functions here.
        //    DO NOT EDIT what you see in these blocks of generated code !
    //}}AFX_MSG
    DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_APPSITESTATUS_H__03029C16_04DE_449E_A53C_8DD259E397CA__INCLUDED_)
