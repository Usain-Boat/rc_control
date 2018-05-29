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
    COLOR_YELLOW,
    COLOR_NO
  } color_t;

  typedef enum
  {
    STANDBY,
    LOADING,
    ERROR,
    NO
  } pattern_t;

  UsainLED();

  void init();

  void set_color(color_t color);

  void set_pattern(UsainLED::pattern_t pattern);

 private:
  void routine();

  Thread led_thread;
  DigitalOut led_red;
  DigitalOut led_green;
  DigitalOut led_blue;

  pattern_t current_pattern;
};

#endif //RC_CONTROL_USAIN_LED_H
