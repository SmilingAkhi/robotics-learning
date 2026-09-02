# SMART IRRIGATION SERVICE

A practice project implementing a **custom ROS 2 Service Interface**.

This project demonstrates how to create and use a custom `.srv` interface between a client and a service server.

The client sends:

- Soil moisture
- Temperature

The service server evaluates the data and decides whether irrigation is required. It returns:

- A boolean (`irrigate`)
- A descriptive reason explaining the decision

This project reinforces:

- Creating custom ROS 2 interfaces
- Building interface packages
- Client-Service communication
- Request and Response structures
- Importing custom interfaces into other ROS 2 packages

---

## 📋 Prerequisites

- **OS:** Ubuntu Linux (22.04 / 24.04)
- **ROS 2:** Humble / Iron / Jazzy
- **Build Tool:** `colcon`

---

## Project Structure

```
project_ws/
├── src/
│   ├── irrigation_interfaces/
│   └── smart_irrigation_pkg/
```

- **irrigation_interfaces** contains the custom `SmartIrrigator.srv` interface.
- **smart_irrigation_pkg** contains the client and service implementations.

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
colcon build --packages-select irrigation_interfaces smart_irrigation_pkg --symlink-install
```

---

### Source the workspace

Open a new terminal.

Navigate to the workspace root and run:

```bash
source install/setup.bash
```

---

### Run the Service

```bash
ros2 run smart_irrigation_pkg service
```

---

### Run the Client

Open another terminal.

Source the workspace again:

```bash
source install/setup.bash
```

Run the client by supplying:

```text
Temperature  Soil_Moisture
```

Example:

```bash
ros2 run smart_irrigation_pkg client 35 20
```

Example Output:

```
Should I irrigate? True
Reason: Soil is dry and temperature is high.
```

---

## What I Learned

- Creating custom `.srv` interfaces
- Building interface packages with `colcon`
- Importing custom interfaces into another package
- Implementing custom ROS 2 service servers
- Implementing custom ROS 2 clients
- Using request and response objects to exchange structured data