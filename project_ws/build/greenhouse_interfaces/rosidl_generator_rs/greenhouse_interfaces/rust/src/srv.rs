#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to greenhouse_interfaces__srv__Sensor_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Sensor_Request::default())
  }
}

impl rosidl_runtime_rs::Message for Sensor_Request {
  type RmwMsg = super::srv::rmw::Sensor_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        temperature: msg.temperature,
        humidity: msg.humidity,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      temperature: msg.temperature,
      humidity: msg.humidity,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      temperature: msg.temperature,
      humidity: msg.humidity,
    }
  }
}


// Corresponds to greenhouse_interfaces__srv__Sensor_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub recommendation: std::string::String,

}



impl Default for Sensor_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::Sensor_Response::default())
  }
}

impl rosidl_runtime_rs::Message for Sensor_Response {
  type RmwMsg = super::srv::rmw::Sensor_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fan_on: msg.fan_on,
        irrigation_on: msg.irrigation_on,
        recommendation: msg.recommendation.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      fan_on: msg.fan_on,
      irrigation_on: msg.irrigation_on,
        recommendation: msg.recommendation.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      fan_on: msg.fan_on,
      irrigation_on: msg.irrigation_on,
      recommendation: msg.recommendation.to_string(),
    }
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


