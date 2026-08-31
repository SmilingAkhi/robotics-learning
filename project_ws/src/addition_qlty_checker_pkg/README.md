## ADDITION QUALITY CHECKER 
A Practice package implementing a custom client-service architecture.
The client sends two integers to the service server, which computes the sum
it also determines and logs to the server whether the result is **Normal** or **Large** based on a defined threshold.

## 📋 Prerequisites

- **OS:** Ubuntu Linux (22.04 / 24.04)
- **ROS 2:** Humble / Iron / Jazzy
- **Build Tool:** `colcon`

## Local Setup Guide 

  - Clone the repo
  
  - build your workspace 
    - navigate the root of the workspace and run:
 
        ```
        colcon build --packages-select addition_qlty_checker_pkg --symlink-install 
        ```

 - Source the overlay
    - open a new terminal and navigate your workspace root and source:
  
        ```
        source install/setup.bash
        ```

    - Run the ros2 node
        
        ```
        ros2 run addition_qlty_checker_pkg service
        ```

    - Open a new terminal, navigate your workspace root, source again and run:

        ```
        ros2 run addition_qlty_checker_pkg client 20 10
        
        ```