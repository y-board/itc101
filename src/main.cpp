#include "ybadge.h"

int main();
int get_brightness();
void light_all_lights(int r, int g, int b);
void turn_off_all_lights();
bool check_switches();

//////////////////////////////
// Modify this function     //
//////////////////////////////
int main() {
    while (true) {
        if (buttons_get(1)) {
            while (buttons_get(1)) {
                light_all_lights(255, 0, 0);
                leds_set_brightness(get_brightness());
                if (check_switches()) {
                    speaker_play_note(NOTE_C4, 10);
                }
            }
        } else if (buttons_get(2)) {
            while (buttons_get(2)) {
                light_all_lights(255, 255, 0);
                leds_set_brightness(get_brightness());
                if (check_switches()) {
                    speaker_play_note(NOTE_D4, 10);
                }
            }
        } else if (buttons_get(3)) {
            while (buttons_get(3)) {
                light_all_lights(0, 255, 0);
                leds_set_brightness(get_brightness());
                if (check_switches()) {
                    speaker_play_note(NOTE_E4, 10);
                }
            }
        } else {
            light_all_lights(255, 255, 255);
            leds_set_brightness(get_brightness());
        }
    }
}

//////////////////////////////
// Helper functions         //
//////////////////////////////

// This function converts the knob's output (1-100) to a brightness value (0-255)
int get_brightness() {
    int brightness = 255 * knob_get() / 100;
    return floor(brightness);
}

// This function lights up all of the LEDs with the given color
void light_all_lights(int r, int g, int b) {
    for (int i = 1; i <= 20; i++) {
        leds_set_color(i, r, g, b);
    }
}

// This function turns off all of the LEDs
void turn_off_all_lights() { light_all_lights(0, 0, 0); }

// This function checks if either of the switches are on
bool check_switches() { return switches_get(1) || switches_get(2); }

//////////////////////////////////////////////////
// Don't touch these                            //
// ...unless you know what you are doing        //
//////////////////////////////////////////////////

void setup() {
    Serial.begin(9600);
    leds_init();
    timer_init();
    delay(1000);
    main();
    while (1)
        ;
}

void loop() {}
