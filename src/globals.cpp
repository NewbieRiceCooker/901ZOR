#include "main.h"

pros::MotorGroup left_drive({-1, -19}, pros::v5::MotorGears::blue, pros::v5::MotorUnits::degrees);
pros::MotorGroup right_drive({17, 20}, pros::v5::MotorGears::blue, pros::v5::MotorUnits::degrees);

// Cascade Motors
pros::Motor leftCascadeMotor(13, pros::v5::MotorGears::green, pros::v5::MotorUnits::degrees);
pros::Motor rightCascadeMotor(-14, pros::v5::MotorGears::green, pros::v5::MotorUnits::degrees);

//11 intake motor & 15 score motor
pros::Motor intakeMotor(11, pros::v5::MotorGears::green, pros::v5::MotorUnits::degrees);
pros::Motor scoreMotor(15, pros::v5::MotorGears::green, pros::v5::MotorUnits::degrees);

// End Effector Motor and Rotation Sensor
pros::Motor endEffectorMotor(9, pros::v5::MotorGears::green, pros::v5::MotorUnits::degrees);
pros::Rotation endEffectorRotation(-16); // Assuming the rotation sensor is connected to port 15