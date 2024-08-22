# Autonomous-Sumo-Robot-
An autonomous mini-sumo robot developed for competitive robotics, designed to detect and push opponent robots out of a circular ring. Built using Arduino, ultrasonic, and infrared sensors, with optimised control algorithms for real-time navigation and boundary sensing.

## Overview
This project involves the design and development of an autonomous mini-sumo robot built to compete in a robotics event. The robot is designed to detect and engage opponent robots, pushing them out of a circular ring using a combination of ultrasonic and infrared sensors. The project showcases the application of robotics, sensor integration, and control algorithms to create a reliable and competitive robot.

## Features
- **Autonomous Navigation:** The robot can navigate the ring and avoid crossing the boundaries using real-time sensor data.
- **Enemy Detection:** Utilizes ultrasonic and infrared sensors to detect and target opponent robots.
- **Compact Design:** Adheres to strict size (10cm x 10cm) and weight (under 500g) constraints for competitive robotics.
- **Modular Build:** Designed with a modular 3mm acrylic laser-cut chassis for easy assembly, diagnostics, and repair.

## Technologies Used
- **Arduino:** Microcontroller platform for robot control and sensor integration.
- **L298N Motor Driver:** Controls the movement of the robot's motors.
- **HC-SR04 Ultrasonic Sensor:** Detects opponent robots and measures distance.
- **KY-033 Infrared Sensor:** Senses the boundaries of the ring.
- **2D Laser Cutting:** Used to create the robot's chassis from 3mm acrylic sheets.

## Project Structure
- **/code:** Contains the Arduino source code for the robot's control system.
- **/design:** Includes design files for the laser-cut chassis and other mechanical components.
- **/docs:** Documentation related to the project, including the project report, circuit diagrams, and testing notes.
- **/media:** Photos and videos of the robot in action, showcasing its performance in the competition.

## Setup and Usage
1. **Hardware Assembly:** Assemble the robot using the provided chassis design and components list.
2. **Software Upload:** Upload the Arduino code from the `/code` directory to the robot's microcontroller.
3. **Calibration:** Calibrate the sensors as per the instructions in the `/docs` folder to ensure accurate detection and navigation.
4. **Testing:** Test the robot's movement, sensor accuracy, and boundary detection before competition use.

## Challenges and Solutions
- **Sensor Noise:** Implemented filtering techniques to reduce noise and improve the accuracy of opponent detection.
- **Boundary Detection:** Optimized the placement and sensitivity of infrared sensors to ensure reliable boundary detection during fast movements.

## Future Improvements
- **Enhanced AI:** Explore integrating machine learning algorithms for improved opponent detection and strategy adaptation.
- **Advanced Materials:** Consider using lighter materials for the chassis to further optimize the robot's speed and agility.


