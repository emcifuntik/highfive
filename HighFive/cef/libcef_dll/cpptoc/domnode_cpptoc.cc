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

#include "libcef_dll/cpptoc/domdocument_cpptoc.h"
#include "libcef_dll/cpptoc/domnode_cpptoc.h"
#include "libcef_dll/transfer_util.h"


namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

cef_dom_node_type_t CEF_CALLBACK domnode_get_type(struct _cef_domnode_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return DOM_NODE_TYPE_UNSUPPORTED;

  // Execute
  cef_dom_node_type_t _retval = CefDOMNodeCppToC::Get(self)->GetType();

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK domnode_is_text(struct _cef_domnode_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefDOMNodeCppToC::Get(self)->IsText();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK domnode_is_element(struct _cef_domnode_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefDOMNodeCppToC::Get(self)->IsElement();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK domnode_is_editable(struct _cef_domnode_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefDOMNodeCppToC::Get(self)->IsEditable();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK domnode_is_form_control_element(struct _cef_domnode_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefDOMNodeCppToC::Get(self)->IsFormControlElement();

  // Return type: bool
  return _retval;
}

cef_string_userfree_t CEF_CALLBACK domnode_get_form_control_element_type(
    struct _cef_domnode_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefDOMNodeCppToC::Get(self)->GetFormControlElementType();

  // Return type: string
  return _retval.DetachToUserFree();
}

int CEF_CALLBACK domnode_is_same(struct _cef_domnode_t* self,
    struct _cef_domnode_t* that) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: that; type: refptr_same
  DCHECK(that);
  if (!that)
    return 0;

  // Execute
  bool _retval = CefDOMNodeCppToC::Get(self)->IsSame(
      CefDOMNodeCppToC::Unwrap(that));

  // Return type: bool
  return _retval;
}

cef_string_userfree_t CEF_CALLBACK domnode_get_name(
    struct _cef_domnode_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefDOMNodeCppToC::Get(self)->GetName();

  // Return type: string
  return _retval.DetachToUserFree();
}

cef_string_userfree_t CEF_CALLBACK domnode_get_value(
    struct _cef_domnode_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefDOMNodeCppToC::Get(self)->GetValue();

  // Return type: string
  return _retval.DetachToUserFree();
}

int CEF_CALLBACK domnode_set_value(struct _cef_domnode_t* self,
    const cef_string_t* value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: value; type: string_byref_const
  DCHECK(value);
  if (!value)
    return 0;

  // Execute
  bool _retval = CefDOMNodeCppToC::Get(self)->SetValue(
      CefString(value));

  // Return type: bool
  return _retval;
}

cef_string_userfree_t CEF_CALLBACK domnode_get_as_markup(
    struct _cef_domnode_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefDOMNodeCppToC::Get(self)->GetAsMarkup();

  // Return type: string
  return _retval.DetachToUserFree();
}

cef_domdocument_t* CEF_CALLBACK domnode_get_document(
    struct _cef_domnode_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefDOMDocument> _retval = CefDOMNodeCppToC::Get(self)->GetDocument(
      );

  // Return type: refptr_same
  return CefDOMDocumentCppToC::Wrap(_retval);
}

struct _cef_domnode_t* CEF_CALLBACK domnode_get_parent(
    struct _cef_domnode_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefDOMNode> _retval = CefDOMNodeCppToC::Get(self)->GetParent();

  // Return type: refptr_same
  return CefDOMNodeCppToC::Wrap(_retval);
}

struct _cef_domnode_t* CEF_CALLBACK domnode_get_previous_sibling(
    struct _cef_domnode_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefDOMNode> _retval = CefDOMNodeCppToC::Get(
      self)->GetPreviousSibling();

  // Return type: refptr_same
  return CefDOMNodeCppToC::Wrap(_retval);
}

struct _cef_domnode_t* CEF_CALLBACK domnode_get_next_sibling(
    struct _cef_domnode_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefDOMNode> _retval = CefDOMNodeCppToC::Get(self)->GetNextSibling();

  // Return type: refptr_same
  return CefDOMNodeCppToC::Wrap(_retval);
}

int CEF_CALLBACK domnode_has_children(struct _cef_domnode_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefDOMNodeCppToC::Get(self)->HasChildren();

  // Return type: bool
  return _retval;
}

struct _cef_domnode_t* CEF_CALLBACK domnode_get_first_child(
    struct _cef_domnode_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefDOMNode> _retval = CefDOMNodeCppToC::Get(self)->GetFirstChild();

  // Return type: refptr_same
  return CefDOMNodeCppToC::Wrap(_retval);
}

struct _cef_domnode_t* CEF_CALLBACK domnode_get_last_child(
    struct _cef_domnode_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefDOMNode> _retval = CefDOMNodeCppToC::Get(self)->GetLastChild();

  // Return type: refptr_same
  return CefDOMNodeCppToC::Wrap(_retval);
}

cef_string_userfree_t CEF_CALLBACK domnode_get_element_tag_name(
    struct _cef_domnode_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefDOMNodeCppToC::Get(self)->GetElementTagName();

  // Return type: string
  return _retval.DetachToUserFree();
}

int CEF_CALLBACK domnode_has_element_attributes(struct _cef_domnode_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefDOMNodeCppToC::Get(self)->HasElementAttributes();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK domnode_has_element_attribute(struct _cef_domnode_t* self,
    const cef_string_t* attrName) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: attrName; type: string_byref_const
  DCHECK(attrName);
  if (!attrName)
    return 0;

  // Execute
  bool _retval = CefDOMNodeCppToC::Get(self)->HasElementAttribute(
      CefString(attrName));

  // Return type: bool
  return _retval;
}

cef_string_userfree_t CEF_CALLBACK domnode_get_element_attribute(
    struct _cef_domnode_t* self, const cef_string_t* attrName) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;
  // Verify param: attrName; type: string_byref_const
  DCHECK(attrName);
  if (!attrName)
    return NULL;

  // Execute
  CefString _retval = CefDOMNodeCppToC::Get(self)->GetElementAttribute(
      CefString(attrName));

  // Return type: string
  return _retval.DetachToUserFree();
}

void CEF_CALLBACK domnode_get_element_attributes(struct _cef_domnode_t* self,
    cef_string_map_t attrMap) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: attrMap; type: string_map_single_byref
  DCHECK(attrMap);
  if (!attrMap)
    return;

  // Translate param: attrMap; type: string_map_single_byref
  std::map<CefString, CefString> attrMapMap;
  transfer_string_map_contents(attrMap, attrMapMap);

  // Execute
  CefDOMNodeCppToC::Get(self)->GetElementAttributes(
      attrMapMap);

  // Restore param: attrMap; type: string_map_single_byref
  cef_string_map_clear(attrMap);
  transfer_string_map_contents(attrMapMap, attrMap);
}

int CEF_CALLBACK domnode_set_element_attribute(struct _cef_domnode_t* self,
    const cef_string_t* attrName, const cef_string_t* value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: attrName; type: string_byref_const
  DCHECK(attrName);
  if (!attrName)
    return 0;
  // Verify param: value; type: string_byref_const
  DCHECK(value);
  if (!value)
    return 0;

  // Execute
  bool _retval = CefDOMNodeCppToC::Get(self)->SetElementAttribute(
      CefString(attrName),
      CefString(value));

  // Return type: bool
  return _retval;
}

cef_string_userfree_t CEF_CALLBACK domnode_get_element_inner_text(
    struct _cef_domnode_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefDOMNodeCppToC::Get(self)->GetElementInnerText();

  // Return type: string
  return _retval.DetachToUserFree();
}

cef_rect_t CEF_CALLBACK domnode_get_element_bounds(
    struct _cef_domnode_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return CefRect();

  // Execute
  cef_rect_t _retval = CefDOMNodeCppToC::Get(self)->GetElementBounds();

  // Return type: simple
  return _retval;
}

}  // namespace


// CONSTRUCTOR - Do not edit by hand.

CefDOMNodeCppToC::CefDOMNodeCppToC() {
  GetStruct()->get_type = domnode_get_type;
  GetStruct()->is_text = domnode_is_text;
  GetStruct()->is_element = domnode_is_element;
  GetStruct()->is_editable = domnode_is_editable;
  GetStruct()->is_form_control_element = domnode_is_form_control_element;
  GetStruct()->get_form_control_element_type =
      domnode_get_form_control_element_type;
  GetStruct()->is_same = domnode_is_same;
  GetStruct()->get_name = domnode_get_name;
  GetStruct()->get_value = domnode_get_value;
  GetStruct()->set_value = domnode_set_value;
  GetStruct()->get_as_markup = domnode_get_as_markup;
  GetStruct()->get_document = domnode_get_document;
  GetStruct()->get_parent = domnode_get_parent;
  GetStruct()->get_previous_sibling = domnode_get_previous_sibling;
  GetStruct()->get_next_sibling = domnode_get_next_sibling;
  GetStruct()->has_children = domnode_has_children;
  GetStruct()->get_first_child = domnode_get_first_child;
  GetStruct()->get_last_child = domnode_get_last_child;
  GetStruct()->get_element_tag_name = domnode_get_element_tag_name;
  GetStruct()->has_element_attributes = domnode_has_element_attributes;
  GetStruct()->has_element_attribute = domnode_has_element_attribute;
  GetStruct()->get_element_attribute = domnode_get_element_attribute;
  GetStruct()->get_element_attributes = domnode_get_element_attributes;
  GetStruct()->set_element_attribute = domnode_set_element_attribute;
  GetStruct()->get_element_inner_text = domnode_get_element_inner_text;
  GetStruct()->get_element_bounds = domnode_get_element_bounds;
}

template<> CefRefPtr<CefDOMNode> CefCppToC<CefDOMNodeCppToC, CefDOMNode,
    cef_domnode_t>::UnwrapDerived(CefWrapperType type, cef_domnode_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template<> base::AtomicRefCount CefCppToC<CefDOMNodeCppToC, CefDOMNode,
    cef_domnode_t>::DebugObjCt = 0;
#endif

template<> CefWrapperType CefCppToC<CefDOMNodeCppToC, CefDOMNode,
    cef_domnode_t>::kWrapperType = WT_DOMNODE;
