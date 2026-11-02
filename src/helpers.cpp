#include "helpers.hpp"
#include "globals.hpp"

void toggleEndEffector(bool extend) {
    // 1. Pick target: 345 deg if extending, 5 deg if retracting
    double target = extend ? 345.0 : 5.0;
    double current = endEffectorRotation.get_position() / 100.0;

    // 2. Drive positive toward 345 deg
    if (current < target - 5.0) {
        endEffectorMotor.move(70);
    } 
    // 3. Drive negative toward 5 deg
    else if (current > target + 5.0) {
        endEffectorMotor.move(-70);
    } 
    // 4. Hold position when within 5 degrees of target
    else {
        endEffectorMotor.set_brake_mode(pros::E_MOTOR_BRAKE_HOLD);
        endEffectorMotor.brake();
    }
}