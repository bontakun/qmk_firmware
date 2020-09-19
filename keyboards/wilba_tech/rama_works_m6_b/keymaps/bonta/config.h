#pragma once
#include RGB_BACKLIGHT

// override default brightness
#undef RGB_BACKLIGHT_BRIGHTNESS
#define RGB_BACKLIGHT_BRIGHTNESS 100

// the override the default effect
#undef RGB_BACKLIGHT_EFFECT
#define RGB_BACKLIGHT_EFFECT 6 // via quantum/rgblight.h this is rainbow mood

// Let the lights go off when the computer is sleepy
#define RGB_DISABLE_TIMEOUT 600000 // wait 10 minutes for keyboard keys to turn off. 
#define RGB_DISABLE_WHEN_USB_SUSPENDED true