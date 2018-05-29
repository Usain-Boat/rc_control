//
// Created by Jamie on 29-5-2018.
//

#ifndef RC_CONTROL_USAIN_LED_H
#define RC_CONTROL_USAIN_LED_H

#include <mbed.h>

class UsainLED
{
 public:
  typedef enum
  {
    COLOR_RED,
    COLOR_GREEN,
    COLOR_BLUE,
  } color_t;

  UsainLED();

  void init();

  void set_color(color_t color);

  void set_timing(float period, float on_time);

 private:
  void routine();

  EventQueue event;
  EventQueue event_led_off;
  DigitalOut led_red;
  DigitalOut led_green;
  DigitalOut led_blue;
};

#endif //RC_CONTROL_USAIN_LED_H
