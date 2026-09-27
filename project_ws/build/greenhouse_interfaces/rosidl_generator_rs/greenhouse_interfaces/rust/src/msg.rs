#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to greenhouse_interfaces__msg__Sensor

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Sensor::default())
  }
}

impl rosidl_runtime_rs::Message for Sensor {
  type RmwMsg = super::msg::rmw::Sensor;

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


