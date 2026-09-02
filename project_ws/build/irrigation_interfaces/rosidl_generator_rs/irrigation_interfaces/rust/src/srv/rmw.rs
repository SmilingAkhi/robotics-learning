#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "irrigation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__irrigation_interfaces__srv__SmartIrrigator_Request() -> *const std::ffi::c_void;
}

#[link(name = "irrigation_interfaces__rosidl_generator_c")]
extern "C" {
    fn irrigation_interfaces__srv__SmartIrrigator_Request__init(msg: *mut SmartIrrigator_Request) -> bool;
    fn irrigation_interfaces__srv__SmartIrrigator_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SmartIrrigator_Request>, size: usize) -> bool;
    fn irrigation_interfaces__srv__SmartIrrigator_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SmartIrrigator_Request>);
    fn irrigation_interfaces__srv__SmartIrrigator_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SmartIrrigator_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SmartIrrigator_Request>) -> bool;
}

// Corresponds to irrigation_interfaces__srv__SmartIrrigator_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SmartIrrigator_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub temp: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mc: f32,

}



impl Default for SmartIrrigator_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !irrigation_interfaces__srv__SmartIrrigator_Request__init(&mut msg as *mut _) {
        panic!("Call to irrigation_interfaces__srv__SmartIrrigator_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SmartIrrigator_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { irrigation_interfaces__srv__SmartIrrigator_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { irrigation_interfaces__srv__SmartIrrigator_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { irrigation_interfaces__srv__SmartIrrigator_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SmartIrrigator_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SmartIrrigator_Request where Self: Sized {
  const TYPE_NAME: &'static str = "irrigation_interfaces/srv/SmartIrrigator_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__irrigation_interfaces__srv__SmartIrrigator_Request() }
  }
}


#[link(name = "irrigation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__irrigation_interfaces__srv__SmartIrrigator_Response() -> *const std::ffi::c_void;
}

#[link(name = "irrigation_interfaces__rosidl_generator_c")]
extern "C" {
    fn irrigation_interfaces__srv__SmartIrrigator_Response__init(msg: *mut SmartIrrigator_Response) -> bool;
    fn irrigation_interfaces__srv__SmartIrrigator_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SmartIrrigator_Response>, size: usize) -> bool;
    fn irrigation_interfaces__srv__SmartIrrigator_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SmartIrrigator_Response>);
    fn irrigation_interfaces__srv__SmartIrrigator_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SmartIrrigator_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SmartIrrigator_Response>) -> bool;
}

// Corresponds to irrigation_interfaces__srv__SmartIrrigator_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SmartIrrigator_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub irrigate: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reason: rosidl_runtime_rs::String,

}



impl Default for SmartIrrigator_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !irrigation_interfaces__srv__SmartIrrigator_Response__init(&mut msg as *mut _) {
        panic!("Call to irrigation_interfaces__srv__SmartIrrigator_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SmartIrrigator_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { irrigation_interfaces__srv__SmartIrrigator_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { irrigation_interfaces__srv__SmartIrrigator_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { irrigation_interfaces__srv__SmartIrrigator_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SmartIrrigator_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SmartIrrigator_Response where Self: Sized {
  const TYPE_NAME: &'static str = "irrigation_interfaces/srv/SmartIrrigator_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__irrigation_interfaces__srv__SmartIrrigator_Response() }
  }
}






#[link(name = "irrigation_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__irrigation_interfaces__srv__SmartIrrigator() -> *const std::ffi::c_void;
}

// Corresponds to irrigation_interfaces__srv__SmartIrrigator
#[allow(missing_docs, non_camel_case_types)]
pub struct SmartIrrigator;

impl rosidl_runtime_rs::Service for SmartIrrigator {
    type Request = SmartIrrigator_Request;
    type Response = SmartIrrigator_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__irrigation_interfaces__srv__SmartIrrigator() }
    }
}


