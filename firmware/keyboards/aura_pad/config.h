#pragma once

// OLED Screen Hardware Pin Assignments
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP26
#define I2C1_SCL_PIN GP27

// SK6812MINI-E LED Setup Parameters
#define WS2812_DI_PIN GP23
#define RGB_LED_NUM 5
#define RGBLIGHT_LED_COUNT 5   // <-- THIS FIXES THE COMPILER LOOP

// Smooth Fading Backlight settings
#define RGBLIGHT_EFFECT_BREATHING
