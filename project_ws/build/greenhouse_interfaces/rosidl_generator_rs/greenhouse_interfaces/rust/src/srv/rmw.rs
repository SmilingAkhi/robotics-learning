#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "greenhouse_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__greenhouse_interfaces__srv__Sensor_Request() -> *const std::ffi::c_void;
}

#[link(name = "greenhouse_interfaces__rosidl_generator_c")]
extern "C" {
    fn greenhouse_interfaces__srv__Sensor_Request__init(msg: *mut Sensor_Request) -> bool;
    fn greenhouse_interfaces__srv__Sensor_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Sensor_Request>, size: usize) -> bool;
    fn greenhouse_interfaces__srv__Sensor_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Sensor_Request>);
    fn greenhouse_interfaces__srv__Sensor_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Sensor_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Sensor_Request>) -> bool;
}

// Corresponds to greenhouse_interfaces__srv__Sensor_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Sensor_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub humidity: f32,

}



impl Default for Sensor_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !greenhouse_interfaces__srv__Sensor_Request__init(&mut msg as *mut _) {
        panic!("Call to greenhouse_interfaces__srv__Sensor_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Sensor_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { greenhouse_interfaces__srv__Sensor_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { greenhouse_interfaces__srv__Sensor_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { greenhouse_interfaces__srv__Sensor_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Sensor_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Sensor_Request where Self: Sized {
  const TYPE_NAME: &'static str = "greenhouse_interfaces/srv/Sensor_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__greenhouse_interfaces__srv__Sensor_Request() }
  }
}


#[link(name = "greenhouse_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__greenhouse_interfaces__srv__Sensor_Response() -> *const std::ffi::c_void;
}

#[link(name = "greenhouse_interfaces__rosidl_generator_c")]
extern "C" {
    fn greenhouse_interfaces__srv__Sensor_Response__init(msg: *mut Sensor_Response) -> bool;
    fn greenhouse_interfaces__srv__Sensor_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Sensor_Response>, size: usize) -> bool;
    fn greenhouse_interfaces__srv__Sensor_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Sensor_Response>);
    fn greenhouse_interfaces__srv__Sensor_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Sensor_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Sensor_Response>) -> bool;
}

// Corresponds to greenhouse_interfaces__srv__Sensor_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Sensor_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fan_on: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub irrigation_on: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub recommendation: rosidl_runtime_rs::String,

}



impl Default for Sensor_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !greenhouse_interfaces__srv__Sensor_Response__init(&mut msg as *mut _) {
        panic!("Call to greenhouse_interfaces__srv__Sensor_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Sensor_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { greenhouse_interfaces__srv__Sensor_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { greenhouse_interfaces__srv__Sensor_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { greenhouse_interfaces__srv__Sensor_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Sensor_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Sensor_Response where Self: Sized {
  const TYPE_NAME: &'static str = "greenhouse_interfaces/srv/Sensor_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__greenhouse_interfaces__srv__Sensor_Response() }
  }
}






#[link(name = "greenhouse_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__greenhouse_interfaces__srv__Sensor() -> *const std::ffi::c_void;
}

// Corresponds to greenhouse_interfaces__srv__Sensor
#[allow(missing_docs, non_camel_case_types)]
pub struct Sensor;

impl rosidl_runtime_rs::Service for Sensor {
    type Request = Sensor_Request;
    type Response = Sensor_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__greenhouse_interfaces__srv__Sensor() }
    }
}


