#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to irrigation_interfaces__srv__SmartIrrigator_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SmartIrrigator_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SmartIrrigator_Request {
  type RmwMsg = super::srv::rmw::SmartIrrigator_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        temp: msg.temp,
        mc: msg.mc,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      temp: msg.temp,
      mc: msg.mc,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      temp: msg.temp,
      mc: msg.mc,
    }
  }
}


// Corresponds to irrigation_interfaces__srv__SmartIrrigator_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SmartIrrigator_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub irrigate: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reason: std::string::String,

}



impl Default for SmartIrrigator_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SmartIrrigator_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SmartIrrigator_Response {
  type RmwMsg = super::srv::rmw::SmartIrrigator_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        irrigate: msg.irrigate,
        reason: msg.reason.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      irrigate: msg.irrigate,
        reason: msg.reason.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      irrigate: msg.irrigate,
      reason: msg.reason.to_string(),
    }
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


