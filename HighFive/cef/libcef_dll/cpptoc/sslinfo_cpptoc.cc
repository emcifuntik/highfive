// Copyright (c) 2016 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/cpptoc/sslinfo_cpptoc.h"
#include "libcef_dll/cpptoc/x509certificate_cpptoc.h"


namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

cef_cert_status_t CEF_CALLBACK sslinfo_get_cert_status(
    struct _cef_sslinfo_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return CERT_STATUS_NONE;

  // Execute
  cef_cert_status_t _retval = CefSSLInfoCppToC::Get(self)->GetCertStatus();

  // Return type: simple
  return _retval;
}

struct _cef_x509certificate_t* CEF_CALLBACK sslinfo_get_x509certificate(
    struct _cef_sslinfo_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefX509Certificate> _retval = CefSSLInfoCppToC::Get(
      self)->GetX509Certificate();

  // Return type: refptr_same
  return CefX509CertificateCppToC::Wrap(_retval);
}

}  // namespace


// CONSTRUCTOR - Do not edit by hand.

CefSSLInfoCppToC::CefSSLInfoCppToC() {
  GetStruct()->get_cert_status = sslinfo_get_cert_status;
  GetStruct()->get_x509certificate = sslinfo_get_x509certificate;
}

template<> CefRefPtr<CefSSLInfo> CefCppToC<CefSSLInfoCppToC, CefSSLInfo,
    cef_sslinfo_t>::UnwrapDerived(CefWrapperType type, cef_sslinfo_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template<> base::AtomicRefCount CefCppToC<CefSSLInfoCppToC, CefSSLInfo,
    cef_sslinfo_t>::DebugObjCt = 0;
#endif

template<> CefWrapperType CefCppToC<CefSSLInfoCppToC, CefSSLInfo,
    cef_sslinfo_t>::kWrapperType = WT_SSLINFO;
