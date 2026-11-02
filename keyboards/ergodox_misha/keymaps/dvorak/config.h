#pragma once

// Set LED brightness levels for the singular RGB LED
#define LED_BRIGHTNESS_LO 30
#define LED_BRIGHTNESS_HI 180
#define LED_BRIGHTNESS_DEFAULT LED_BRIGHTNESS_HI

// Enable Caps Lock status indication
#define CAPS_LOCK_STATUS

// Default PWM values for the RGB LED
#define PWM_DEFAULT_VALUE LED_BRIGHTNESS_DEFAULT

// Unicode input through WinCompose on the Windows host
#define UNICODE_SELECTED_MODES UNICODE_MODE_WINCOMPOSE