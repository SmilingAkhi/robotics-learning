# TEMPERATURE MONITORING SYSTEM

A practice project implementing a **ROS 2 Publisher-Subscriber System**.

This project demonstrates how to create and communicate between two nodes using standard ROS 2 topics and messages.

The publisher node sends:

- Continuous temperature telemetry over `/temperature`
- Formatted string data with auto-incrementing values

The subscriber node receives the data, parses the temperature reading, and evaluates thermal limits. It logs:

- Normal readings for nominal conditions
- A warning alert whenever temperature reaches or exceeds 30°C

This project reinforces:

- Publisher-Subscriber communication pattern
- Creating timed publishers with `create_timer`
- Parsing and extracting values from message payloads
- Node lifecycle and cleanup with `rclpy`

---

## 📋 Prerequisites

- **OS:** Ubuntu Linux (22.04 / 24.04)
- **ROS 2:** Humble / Iron / Jazzy
- **Build Tool:** `colcon`

---

## Local Setup Guide

### Clone the repository

```bash
git clone <repository-url>
```

---

### Build the required packages

Navigate to your workspace root and build:

```bash
colcon build --packages-select temperature_monitor_pkg --symlink-install
```

---

### Source the workspace

Open a new terminal.

Navigate to the workspace root and run:

```bash
source install/setup.bash
```

---

### Run the Publisher

```bash
ros2 run temperature_monitor_pkg temperature_pub
```

Example Output:

```
[INFO] [temperature_monitor_sus]:  publishing: Temperature: 25 °C 
[INFO] [temperature_monitor_sus]:  publishing: Temperature: 26 °C 
[INFO] [temperature_monitor_sus]:  publishing: Temperature: 27 °C 
```

---

### Run the Subscriber

Open another terminal.

Source the workspace again:

```bash
source install/setup.bash
```

Run the subscriber:

```bash
ros2 run temperature_monitor_pkg temperature_sub
```

Example Output:

```
[INFO] [temperature_monitor_sub]: Received: Temperature: 25 °C 
[INFO] [temperature_monitor_sub]: Received: Temperature: 26 °C 
...
[INFO] [temperature_monitor_sub]: Received: Temperature: 30 °C  
 WARNING: HIGH TEMPERATURE DETECTED 
```

---

## What I Learned

- Creating ROS 2 publishers and setting periodic timer callbacks
- Creating ROS 2 subscribers to listen on a shared topic
- Using `std_msgs/msg/String` to transfer telemetry data
- String parsing and type casting inside a callback function
- Conditional threshold checking and status logging with `get_logger().info()`