#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "greenhouse_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__greenhouse_interfaces__msg__Sensor() -> *const std::ffi::c_void;
}

#[link(name = "greenhouse_interfaces__rosidl_generator_c")]
extern "C" {
    fn greenhouse_interfaces__msg__Sensor__init(msg: *mut Sensor) -> bool;
    fn greenhouse_interfaces__msg__Sensor__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Sensor>, size: usize) -> bool;
    fn greenhouse_interfaces__msg__Sensor__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Sensor>);
    fn greenhouse_interfaces__msg__Sensor__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Sensor>, out_seq: *mut rosidl_runtime_rs::Sequence<Sensor>) -> bool;
}

// Corresponds to greenhouse_interfaces__msg__Sensor
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Sensor {

    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub humidity: i64,

}



impl Default for Sensor {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !greenhouse_interfaces__msg__Sensor__init(&mut msg as *mut _) {
        panic!("Call to greenhouse_interfaces__msg__Sensor__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Sensor {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { greenhouse_interfaces__msg__Sensor__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { greenhouse_interfaces__msg__Sensor__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { greenhouse_interfaces__msg__Sensor__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Sensor {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Sensor where Self: Sized {
  const TYPE_NAME: &'static str = "greenhouse_interfaces/msg/Sensor";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__greenhouse_interfaces__msg__Sensor() }
  }
}


