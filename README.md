# Rotary-Tumbler
This repo contains the code, 3D-files and assembly guide for a 3D printed rotary tumbler.





https://github.com/user-attachments/assets/90043965-0956-482e-ac33-672fab636f33




## Introduction

Rotary tumblers are a fun and versatile addition to your manufacturing toolkit. They can be used for sanding and polishing parts, which is particularly useful for preparing 3D-printed components for painting. Other popular applications include the recreational polishing of stones, removing rust, or cleaning paint off small metal parts. These capabilities make rotary tumblers a valuable tool for your future projects.
The inspiration for building this rotary tumbler was driven primarily by the idea of creating something functional from salvaged materials. Most of the required parts can be repurposed from an old 3D printer, making this a cost-effective and sustainable project. Rather than letting unused components sit idle in storage, this project gives them a new purpose, turning leftover parts into a practical and productive tool.

## Design Choices

The core of this tumbler's design revolves around a large pickle jar that serves as the drum, which is filled with an abrasive medium and spun by two rollers. Using a glass jar instead of a 3D-printed chamber ensures water tightness and durability. The decision to build a rotary tumbler, rather than a vibratory one, was based on simplicity. A rotary design is easier to construct, less demanding on components, and well-suited to extended operation.

This project takes a recycling-first approach, which led to the use of stepper motors for driving the rollers. While geared DC motors are generally better suited for this application, stepper motors were selected because they were already on hand. They are easy to control, excel at low RPM applications, and deliver high torque without the need for additional gearboxes. This approach also eliminates the need for a pulley system, which reduces cost and complexity.

Driving both rollers is a critical aspect of this design. Without this feature, the jar's high mass, smooth surface, and limited contact area can cause it to slip rather than roll. By directly coupling the stepper motors to the rollers, the tumbler achieves reliable rotation and eliminates potential issues with gear wear, ensuring the machine can operate for long periods without maintenance. The overall goal of this design is for the jar's contents to wear down, not the tumbler itself.

## Controlling 
The stepper motors in this rotary tumbler are controlled using a CNC-Shield mounted on an Arduino UNO, equipped with two A4988 stepper motor drivers positioned on the X and Y axes. To ensure smooth and precise motion, 1/8 microstepping has been enabled on both motors. This setup offers a simple yet powerful control solution, allowing for precise speed adjustments and ensuring reliable operation over extended periods.
Using an Arduino UNO paired with a CNC-Shield makes the control system modular and easily replicable for other makers. The A4988 drivers are a cost-effective choice, providing the necessary torque and control for low-RPM applications without requiring complex programming or additional hardware. By leveraging this setup, the tumbler achieves consistent performance and can be easily tuned or modified as needed. The entire system is powered by a 12V, 2A power supply salvaged from an LED strip, making it a cost-effective and accessible choice. To safely power the Arduino UNO, an LM2596 buck converter is used to step the 12V supply down to 6V, which is then fed into the Arduino's input jack.

## Bill of Materials

* 2x stepper motor NEMA 17
* 2x rod (8mmx225mm) // I used a threaded rod 
* 2x shaft couplings (5mm to 8mm)
* 13x socket head screw M3x8
* 59x philips head screw M4x16
* 59x M4 hex nut 
* 5x  M3 hex nut
* 6x set screw M5x8
* 4x 608 bearing link
* 1x Arduino Uno
* 1x CNC-Shield with stepper driver
* 1x LM 2596 Buck converter or another power supply to power the Arduino
* 1x Power supply 12V with around 2 A


For the print files please check out: https://makerworld.com/en/models/865983#profileId-817201


## Assembly
### Step 1:
![1](https://github.com/user-attachments/assets/7ecf4707-e990-4921-bef8-b12c9d0c9269)

### Step 2:
![2](https://github.com/user-attachments/assets/95c45d80-71e8-4b37-9912-b1811a923efc)

### Step 3:
![3](https://github.com/user-attachments/assets/cb57905e-77ce-4bf0-bdbb-2c60e0fc79fc)

### Step 4:
![4](https://github.com/user-attachments/assets/5f1e53f0-4eab-406c-9c3f-2a98e79d5152)

### Step 5:
![5](https://github.com/user-attachments/assets/c6ff6984-3dc4-44e0-a911-971da39a4418)

### Step 6:
![6](https://github.com/user-attachments/assets/7b3dd51a-aa52-4601-aa1c-2d244fc5caf7)

### Step 7:
![7](https://github.com/user-attachments/assets/aa8abaf4-8ccd-4331-8568-cb18e835820e)

### Step 8:
![8](https://github.com/user-attachments/assets/5219e5b5-e56f-4019-b9c2-cdf084d1e22d)

### Step 9:
![9](https://github.com/user-attachments/assets/412b4b29-e874-4ff2-99b0-c1e0aa2cb4aa)

### Step 10:
![10](https://github.com/user-attachments/assets/ceed180d-e7ad-4d9d-ab06-75973abb1fd7)

### Step 11:
![11](https://github.com/user-attachments/assets/b5b22398-4415-4ca2-a28c-85852b3b3fcd)

### Step 12:
![12](https://github.com/user-attachments/assets/5f464c84-551b-49ba-b0e6-dd30a97d6fab)

### Step 13:
![13](https://github.com/user-attachments/assets/0207b7b8-466a-4788-a831-0075ae7c56ce)

### Step 14:
![14](https://github.com/user-attachments/assets/bc8311ee-b41d-4612-93de-e83e5480b6f5)

### Step 15:
![15](https://github.com/user-attachments/assets/c1ac3dc8-6db0-4eb5-8acd-355eb536591c)

### Step 16:
![16](https://github.com/user-attachments/assets/51c6f2f6-1256-4651-bbad-41cb497246e1)

### Step 17:
![17](https://github.com/user-attachments/assets/75a3433e-c973-46a4-9c0b-881fc77fb4db)

### Step 18:
![18](https://github.com/user-attachments/assets/294db767-8258-492a-9fd4-b8db56450478)

### Step 19:

![19](https://github.com/user-attachments/assets/d83d4ad8-f0a6-453b-b8fe-a1804eeaa005)


