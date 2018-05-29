//
// Created by Jamie on 29-5-2018.
//

#include "usain_led.h"
UsainLED::UsainLED() : led_red(PD_11),
                       led_green(PD_12),
                       led_blue(PD_13)
{

}

void UsainLED::init()
{
  event.call_every(1000, &led_blue, &DigitalOut::write, 1);
  event_led_off.call_in(300, &led_blue, &DigitalOut::write, 0);

  event_led_off.chain(&event);

  event.dispatch_forever();
}

void UsainLED::set_color(UsainLED::color_t color)
{

}

void UsainLED::set_timing(float period, float on_time)
{

}

void UsainLED::routine()
{

}
