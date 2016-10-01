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

#include "libcef_dll/ctocpp/domdocument_ctocpp.h"
#include "libcef_dll/ctocpp/domnode_ctocpp.h"
#include "libcef_dll/transfer_util.h"


// VIRTUAL METHODS - Body may be edited by hand.

CefDOMNode::Type CefDOMNodeCToCpp::GetType() {
  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_type))
    return DOM_NODE_TYPE_UNSUPPORTED;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_dom_node_type_t _retval = _struct->get_type(_struct);

  // Return type: simple
  return _retval;
}

bool CefDOMNodeCToCpp::IsText() {
  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_text))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_text(_struct);

  // Return type: bool
  return _retval?true:false;
}

bool CefDOMNodeCToCpp::IsElement() {
  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_element))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_element(_struct);

  // Return type: bool
  return _retval?true:false;
}

bool CefDOMNodeCToCpp::IsEditable() {
  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_editable))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_editable(_struct);

  // Return type: bool
  return _retval?true:false;
}

bool CefDOMNodeCToCpp::IsFormControlElement() {
  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_form_control_element))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_form_control_element(_struct);

  // Return type: bool
  return _retval?true:false;
}

CefString CefDOMNodeCToCpp::GetFormControlElementType() {
  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_form_control_element_type))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_form_control_element_type(
      _struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

bool CefDOMNodeCToCpp::IsSame(CefRefPtr<CefDOMNode> that) {
  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_same))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: that; type: refptr_same
  DCHECK(that.get());
  if (!that.get())
    return false;

  // Execute
  int _retval = _struct->is_same(_struct,
      CefDOMNodeCToCpp::Unwrap(that));

  // Return type: bool
  return _retval?true:false;
}

CefString CefDOMNodeCToCpp::GetName() {
  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_name))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_name(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefString CefDOMNodeCToCpp::GetValue() {
  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_value))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_value(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

bool CefDOMNodeCToCpp::SetValue(const CefString& value) {
  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_value))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: value; type: string_byref_const
  DCHECK(!value.empty());
  if (value.empty())
    return false;

  // Execute
  int _retval = _struct->set_value(_struct,
      value.GetStruct());

  // Return type: bool
  return _retval?true:false;
}

CefString CefDOMNodeCToCpp::GetAsMarkup() {
  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_as_markup))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_as_markup(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefRefPtr<CefDOMDocument> CefDOMNodeCToCpp::GetDocument() {
  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_document))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_domdocument_t* _retval = _struct->get_document(_struct);

  // Return type: refptr_same
  return CefDOMDocumentCToCpp::Wrap(_retval);
}

CefRefPtr<CefDOMNode> CefDOMNodeCToCpp::GetParent() {
  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_parent))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_domnode_t* _retval = _struct->get_parent(_struct);

  // Return type: refptr_same
  return CefDOMNodeCToCpp::Wrap(_retval);
}

CefRefPtr<CefDOMNode> CefDOMNodeCToCpp::GetPreviousSibling() {
  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_previous_sibling))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_domnode_t* _retval = _struct->get_previous_sibling(_struct);

  // Return type: refptr_same
  return CefDOMNodeCToCpp::Wrap(_retval);
}

CefRefPtr<CefDOMNode> CefDOMNodeCToCpp::GetNextSibling() {
  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_next_sibling))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_domnode_t* _retval = _struct->get_next_sibling(_struct);

  // Return type: refptr_same
  return CefDOMNodeCToCpp::Wrap(_retval);
}

bool CefDOMNodeCToCpp::HasChildren() {
  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, has_children))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->has_children(_struct);

  // Return type: bool
  return _retval?true:false;
}

CefRefPtr<CefDOMNode> CefDOMNodeCToCpp::GetFirstChild() {
  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_first_child))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_domnode_t* _retval = _struct->get_first_child(_struct);

  // Return type: refptr_same
  return CefDOMNodeCToCpp::Wrap(_retval);
}

CefRefPtr<CefDOMNode> CefDOMNodeCToCpp::GetLastChild() {
  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_last_child))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_domnode_t* _retval = _struct->get_last_child(_struct);

  // Return type: refptr_same
  return CefDOMNodeCToCpp::Wrap(_retval);
}

CefString CefDOMNodeCToCpp::GetElementTagName() {
  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_element_tag_name))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_element_tag_name(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

bool CefDOMNodeCToCpp::HasElementAttributes() {
  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, has_element_attributes))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->has_element_attributes(_struct);

  // Return type: bool
  return _retval?true:false;
}

bool CefDOMNodeCToCpp::HasElementAttribute(const CefString& attrName) {
  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, has_element_attribute))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: attrName; type: string_byref_const
  DCHECK(!attrName.empty());
  if (attrName.empty())
    return false;

  // Execute
  int _retval = _struct->has_element_attribute(_struct,
      attrName.GetStruct());

  // Return type: bool
  return _retval?true:false;
}

CefString CefDOMNodeCToCpp::GetElementAttribute(const CefString& attrName) {
  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_element_attribute))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: attrName; type: string_byref_const
  DCHECK(!attrName.empty());
  if (attrName.empty())
    return CefString();

  // Execute
  cef_string_userfree_t _retval = _struct->get_element_attribute(_struct,
      attrName.GetStruct());

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

void CefDOMNodeCToCpp::GetElementAttributes(AttributeMap& attrMap) {
  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_element_attributes))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Translate param: attrMap; type: string_map_single_byref
  cef_string_map_t attrMapMap = cef_string_map_alloc();
  DCHECK(attrMapMap);
  if (attrMapMap)
    transfer_string_map_contents(attrMap, attrMapMap);

  // Execute
  _struct->get_element_attributes(_struct,
      attrMapMap);

  // Restore param:attrMap; type: string_map_single_byref
  if (attrMapMap) {
    attrMap.clear();
    transfer_string_map_contents(attrMapMap, attrMap);
    cef_string_map_free(attrMapMap);
  }
}

bool CefDOMNodeCToCpp::SetElementAttribute(const CefString& attrName,
    const CefString& value) {
  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_element_attribute))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: attrName; type: string_byref_const
  DCHECK(!attrName.empty());
  if (attrName.empty())
    return false;
  // Verify param: value; type: string_byref_const
  DCHECK(!value.empty());
  if (value.empty())
    return false;

  // Execute
  int _retval = _struct->set_element_attribute(_struct,
      attrName.GetStruct(),
      value.GetStruct());

  // Return type: bool
  return _retval?true:false;
}

CefString CefDOMNodeCToCpp::GetElementInnerText() {
  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_element_inner_text))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_element_inner_text(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefRect CefDOMNodeCToCpp::GetElementBounds() {
  cef_domnode_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_element_bounds))
    return CefRect();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_rect_t _retval = _struct->get_element_bounds(_struct);

  // Return type: simple
  return _retval;
}


// CONSTRUCTOR - Do not edit by hand.

CefDOMNodeCToCpp::CefDOMNodeCToCpp() {
}

template<> cef_domnode_t* CefCToCpp<CefDOMNodeCToCpp, CefDOMNode,
    cef_domnode_t>::UnwrapDerived(CefWrapperType type, CefDOMNode* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template<> base::AtomicRefCount CefCToCpp<CefDOMNodeCToCpp, CefDOMNode,
    cef_domnode_t>::DebugObjCt = 0;
#endif

template<> CefWrapperType CefCToCpp<CefDOMNodeCToCpp, CefDOMNode,
    cef_domnode_t>::kWrapperType = WT_DOMNODE;
