#include "led.h"

static volatile long *const led_data   = (volatile long *const) 0xFF000008;

void define_led_value(int led){

    led = led & 1;
    *led_data = led;
}

int get_led_value(){

    int led_value;
    led_value = *led_data; 
    return led_value;
}
