#include "mbed.h"
#include "usain_control.h"

int count;

int main()
{
  UsainControl control;

  control.set_mode(UsainControl::MODE_UC);

//  control.set_motor(UsainControl::MOTOR_LEFT, 0.0);
//  wait(2);
//  control.set_motor(UsainControl::MOTOR_LEFT, 1.0);
//  wait(0.5);
  control.set_mode(UsainControl::MODE_RC);

  while (true)
  {
    printf("running... %d\n", count++);
//    control.set_motor(UsainControl::MOTOR_LEFT, 0.05);
    wait(1.0);
  }
}
