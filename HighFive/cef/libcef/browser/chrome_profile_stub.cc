// Copyright (c) 2015 The Chromium Embedded Framework Authors.
// Portions copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "libcef/browser/chrome_profile_stub.h"

ChromeProfileStub::ChromeProfileStub(){
}

ChromeProfileStub::~ChromeProfileStub() {
}

scoped_refptr<base::SequencedTaskRunner> ChromeProfileStub::GetIOTaskRunner() {
  NOTIMPLEMENTED();
  return scoped_refptr<base::SequencedTaskRunner>();
}

std::string ChromeProfileStub::GetProfileUserName() const {
  NOTIMPLEMENTED();
  return std::string();
}

Profile::ProfileType ChromeProfileStub::GetProfileType() const {
  NOTIMPLEMENTED();
  return REGULAR_PROFILE;
}

Profile* ChromeProfileStub::GetOffTheRecordProfile() {
  NOTIMPLEMENTED();
  return NULL;
}

void ChromeProfileStub::DestroyOffTheRecordProfile() {
  NOTIMPLEMENTED();
}

bool ChromeProfileStub::HasOffTheRecordProfile() {
  NOTIMPLEMENTED();
  return false;
}

Profile* ChromeProfileStub::GetOriginalProfile() {
  return this;
}

bool ChromeProfileStub::IsSupervised() const  {
  return false;
}

bool ChromeProfileStub::IsChild() const  {
  NOTIMPLEMENTED();
  return false;
}

bool ChromeProfileStub::IsLegacySupervised() const  {
  NOTIMPLEMENTED();
  return false;
}

ExtensionSpecialStoragePolicy*
    ChromeProfileStub::GetExtensionSpecialStoragePolicy()  {
  NOTIMPLEMENTED();
  return NULL;
}

PrefService* ChromeProfileStub::GetOffTheRecordPrefs()  {
  NOTIMPLEMENTED();
  return NULL;
}

net::URLRequestContextGetter*
    ChromeProfileStub::GetRequestContextForExtensions()  {
  NOTIMPLEMENTED();
  return NULL;
}

net::SSLConfigService* ChromeProfileStub::GetSSLConfigService()  {
  NOTIMPLEMENTED();
  return NULL;
}

bool ChromeProfileStub::IsSameProfile(Profile* profile)  {
  NOTIMPLEMENTED();
  return false;
}

base::Time ChromeProfileStub::GetStartTime() const  {
  NOTIMPLEMENTED();
  return base::Time();
}

base::FilePath ChromeProfileStub::last_selected_directory()  {
  NOTIMPLEMENTED();
  return base::FilePath();
}

void ChromeProfileStub::set_last_selected_directory(
    const base::FilePath& path)  {
  NOTIMPLEMENTED();
}

PrefProxyConfigTracker* ChromeProfileStub::GetProxyConfigTracker()  {
  NOTIMPLEMENTED();
  return NULL;
}

chrome_browser_net::Predictor* ChromeProfileStub::GetNetworkPredictor()  {
  NOTIMPLEMENTED();
  return NULL;
}

DevToolsNetworkControllerHandle*
    ChromeProfileStub::GetDevToolsNetworkControllerHandle()  {
  NOTIMPLEMENTED();
  return NULL;
}

void ChromeProfileStub::ClearNetworkingHistorySince(
    base::Time time,
    const base::Closure& completion)  {
  NOTIMPLEMENTED();
}

GURL ChromeProfileStub::GetHomePage()  {
  NOTIMPLEMENTED();
  return GURL();
}

bool ChromeProfileStub::WasCreatedByVersionOrLater(
    const std::string& version)  {
  NOTIMPLEMENTED();
  return false;
}

void ChromeProfileStub::SetExitType(ExitType exit_type) {
  NOTIMPLEMENTED();
}

Profile::ExitType ChromeProfileStub::GetLastSessionExitType() {
  NOTIMPLEMENTED();
  return EXIT_NORMAL;
}
