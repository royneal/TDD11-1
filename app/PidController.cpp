/** @file PidController.cpp
 *  @brief Implementation for a simple PID Controller
 *
 *  This contains a PID controller that supports
 *  a controller with proportional, integral, and
 *  derivative constants.  The class can be used
 *  to calculate a new value given the current value,
 *  a set point and time delta.
 *
 *  @author Robert Dumont
 *  @copyright Copyright [2018] <Robert Dumont>
 */

#include "PidController.h"

PidController::PidController(double kp, double ki, double kd)
    : k_p_(0),
      k_i_(0),
      k_d_(0) {
}

double PidController::calculate(double current_velocity, double set_point,
                                double dt) {
  return 0;
}

double PidController::getKp() const {
  return 0;
}

double PidController::getKi() const {
  return 0;
}

double PidController::getKd() const {
  return 0;
}
