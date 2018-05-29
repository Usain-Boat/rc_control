#include "mbed.h"
#include "usain_control.h"
#include "usain_led.h"

int main()
{
  UsainControl control;
  UsainLED status_led;

  control.set_mode(UsainControl::MODE_RC);

  status_led.set_pattern(UsainLED::LOADING);
  wait(5);
  status_led.set_pattern(UsainLED::STANDBY);

  while (true)
  {
    wait(2.0);
  }
}
