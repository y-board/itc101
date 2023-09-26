#ifndef YBADGE_H
#define YBADGE_H

#include <stdint.h>

#include "Arduino.h"

/*
*  The following constants are used to configure the pins on the YBadge and should not be used in your code.
*/
#define TONE_PIN 33
#define KNOB_PIN 14
#define LED_PIN 5
#define LED_COUNT 20
#define SWITCH1_PIN 9
#define SWITCH2_PIN 10
#define BUTTON1_PIN 11
#define BUTTON2_PIN 12
#define BUTTON3_PIN 13

////////////////////////////// LEDs ///////////////////////////////////////////

/*
*  This function is only used behind the scenes to configure the LEDs and should not be used in your code.
*/
void leds_init();

/*
*  This function sets the brightness of all of the LEDs. 
*  The brightness is specified as an integer between 0 (off) and 255 (full brightness).
*  The void return type means that this function does not return a value.
*/
void leds_set_brightness(uint8_t brightness);

/*
*  This function sets the color of a single LED.
*  The index is an integer between 1 and 20, representing the number of the target LED (for example, 1 corresponds to LED 1 on the board).
*  The red, green, and blue values are integers between 0 (off) and 255 (full brightness).
*  The void return type means that this function does not return a value.
*/
void leds_set_color(uint16_t index, uint8_t red, uint8_t green, uint8_t blue);


////////////////////////////// Switches/Buttons ///////////////////////////////

/*
*  This function returns the state of a switch.
*  The switch_idx is an integer between 1 and 2, representing the number of the target switch (for example, 1 corresponds to switch 1 on the board).
*  The bool return type means that this function returns a boolean value (true or false).
*  True corresponds to the switch being on, and false corresponds to the switch being off.
*/
bool switches_get(uint8_t switch_idx);

/*
*  This function returns the state of a button.
*  The button_idx is an integer between 1 and 3, representing the number of the target button (for example, 1 corresponds to button 1 on the board).
*  The bool return type means that this function returns a boolean value (true or false).
*  True corresponds to the button being pressed, and false corresponds to the button being released.
*/
bool buttons_get(uint8_t button_idx);

/*
*  This function returns the position of the knob.
*  The int return type means that this function returns an integer value.
*  The value returned is between 0 and 100, representing the position of the knob (0 is fully counter-clockwise, 100 is fully clockwise).
*/
int knob_get();


////////////////////////////// Timer Interrupt ////////////////////////////////

/*
*  This function is only used behind the scenes to configure the timer interrupt and should not be used in your code.
*/
void timer_init();


////////////////////////////// Speaker/Tones //////////////////////////////////

/*
*  This function plays a tone on the speaker.
*  The freq is an integer between 31 and 1174, representing the frequency of the tone in Hz.
*  The duration is an integer representing the duration of the tone in milliseconds.
*  The void return type means that this function does not return a value.
*/
void speaker_play_note(unsigned int freq, unsigned long duration);


/*
*  These constant values are used to specify the frequency of a note to be played on the speaker.
*/
#define NOTE_B0 31
#define NOTE_C1 33
#define NOTE_CS1 35
#define NOTE_D1 37
#define NOTE_DS1 39
#define NOTE_E1 41
#define NOTE_F1 44
#define NOTE_FS1 46
#define NOTE_G1 49
#define NOTE_GS1 52
#define NOTE_A1 55
#define NOTE_AS1 58
#define NOTE_B1 62
#define NOTE_C2 65
#define NOTE_CS2 69
#define NOTE_D2 73
#define NOTE_DS2 78
#define NOTE_E2 82
#define NOTE_F2 87
#define NOTE_FS2 93
#define NOTE_G2 98
#define NOTE_GS2 104
#define NOTE_A2 110
#define NOTE_AS2 117
#define NOTE_B2 123
#define NOTE_C3 131
#define NOTE_CS3 139
#define NOTE_D3 147
#define NOTE_DS3 156
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_FS3 185
#define NOTE_G3 196
#define NOTE_GS3 208
#define NOTE_A3 220
#define NOTE_AS3 233
#define NOTE_B3 247
#define NOTE_C4 262
#define NOTE_CS4 277
#define NOTE_D4 294
#define NOTE_DS4 311
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_FS4 370
#define NOTE_G4 392
#define NOTE_GS4 415
#define NOTE_A4 440
#define NOTE_AS4 466
#define NOTE_B4 494
#define NOTE_C5 523
#define NOTE_CS5 554
#define NOTE_D5 587
#define NOTE_DS5 622
#define NOTE_E5 659
#define NOTE_F5 698
#define NOTE_FS5 740
#define NOTE_G5 784
#define NOTE_GS5 831
#define NOTE_A5 880
#define NOTE_AS5 932
#define NOTE_B5 988
#define NOTE_C6 1047
#define NOTE_CS6 1109
#define NOTE_D6 1175
#define NOTE_DS6 1245
#define NOTE_E6 1319
#define NOTE_F6 1397
#define NOTE_FS6 1480
#define NOTE_G6 1568
#define NOTE_GS6 1661
#define NOTE_A6 1760
#define NOTE_AS6 1865
#define NOTE_B6 1976
#define NOTE_C7 2093
#define NOTE_CS7 2217
#define NOTE_D7 2349
#define NOTE_DS7 2489
#define NOTE_E7 2637
#define NOTE_F7 2794
#define NOTE_FS7 2960
#define NOTE_G7 3136
#define NOTE_GS7 3322
#define NOTE_A7 3520
#define NOTE_AS7 3729
#define NOTE_B7 3951
#define NOTE_C8 4186
#define NOTE_CS8 4435
#define NOTE_D8 4699
#define NOTE_DS8 4978

#endif /* YBADGE_H */
