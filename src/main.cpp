#include "mbed.h"
#include "usain_control.h"
#include "usain_led.h"

int main()
{
  UsainControl control;
  UsainLED status_led;

  control.set_mode(UsainControl::MODE_RC);
//  control.set_motor(UsainControl::MOTOR_LEFT, 0.0);
//  wait(2);
//  control.set_motor(UsainControl::MOTOR_LEFT, 1.0);
//  wait(0.5);
//  control.set_motor(UsainControl::MOTOR_LEFT, 0.1);
//  status_led.init();

  while (true)
  {
    wait(1.0);
  }
}
