//
// Created by Jamie on 29-5-2018.
//

#include "usain_led.h"
UsainLED::UsainLED() : led_red(PD_11),
                       led_green(PD_13),
                       led_blue(PD_12),
                       current_pattern(NO)
{
  init();
}

void UsainLED::init()
{
  led_thread.start(callback(this, &UsainLED::routine));
}

void UsainLED::set_color(UsainLED::color_t color)
{
  switch (color)
  {
    case COLOR_RED:led_red = 1;
      led_green = 0;
      led_blue = 0;
      break;

    case COLOR_GREEN:led_red = 0;
      led_green = 1;
      led_blue = 0;
      break;

    case COLOR_BLUE:led_red = 0;
      led_green = 0;
      led_blue = 1;
      break;

    case COLOR_YELLOW:led_red = 1;
      led_green = 1;
      led_blue = 0;
      break;

    default:led_red = 0;
      led_green = 0;
      led_blue = 0;
      break;
  }
}

void UsainLED::set_pattern(UsainLED::pattern_t pattern)
{
  current_pattern = pattern;
}

void UsainLED::routine()
{
  while (true)
  {
    switch (current_pattern)
    {
      case STANDBY:set_color(COLOR_YELLOW);
        wait(0.1);
        set_color(COLOR_NO);
        wait(1.5);
        break;

      case LOADING:set_color(COLOR_RED);
        wait(0.1);
        set_color(COLOR_GREEN);
        wait(0.1);
        break;

      default:set_color(COLOR_NO);
        break;
    }
  }
}
