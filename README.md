# MOVING-ROBOT
An Arduino-based robotic vehicle designed to move in four basic directions: forward, reverse, left, and right.

Components Used:
1. Arduino Uno
2. Motor Driver
3. 2 × DC Motors
4. Robot Chassis
5. 2 × Wheels
6. Battery
7. Jumper Wires

Working:
1. The Arduino Uno controls the motor driver, which controls the direction of rotation of the two DC motors.
2. By changing the direction of rotation of each motor, the robot can move forward, reverse, left, and right.

Arduino UNO
     ↓
Motor Driver
   ↙     ↘
Left     Right
Motor    Motor
   ↓       ↓
     Robot

Movement:
1. Forward
Both motors rotate in the forward direction.

Left Motor  → Forward
Right Motor → Forward

2. Reverse

Both motors rotate in the reverse direction.

Left Motor  → Reverse
Right Motor → Reverse

3. Left

The left motor is stopped/reversed while the right motor moves forward.

Left Motor  → Stop/Reverse
Right Motor → Forward

4. Right

The left motor moves forward while the right motor is stopped/reversed.

Left Motor  → Forward
Right Motor → Stop/Reverse

5. Stop

Both motors are stopped.

Left Motor  → Stop
Right Motor → Stop

Pin Configuration

Component

Arduino Pin

Motor Driver IN1

D2

Motor Driver IN2

D3

Motor Driver IN3

D4

Motor Driver IN4

D5

Features

Forward movement

Reverse movement

Left turn

Right turn

Stop function

Arduino Uno based

DC motor control

Simple robotic chassis

Applications

Arduino robotics

Embedded systems projects

Motor control experiments

Robotics demonstrations

College mini-projects

Beginner robotics projects

Future Improvements

IR obstacle detection

Ultrasonic obstacle detection

Line-following capability

Automatic navigation

PWM-based speed control

Bluetooth control

Autonomous navigation

Project Structure

arduino-direction-control-robot/
│
├── README.md
│
├── Arduino_Code/
│   └── robot_control.ino
│
├── Images/
│   ├── robot.jpg
│   └── circuit.jpg
│
└── LICENSE

Author
Aditi Bhatnagar

[Your Name]
