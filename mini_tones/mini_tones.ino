
#include "pitches.h"

int SPEAKER_PIN=8;

int buttonPins[] = { 12, 11, 10, 9, 7, 6, 5, 4 };
int buttonTones[] = {
  NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4,
  NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5
};
int numTones = sizeof(buttonPins) / sizeof(buttonPins[0]);
// Total number of possible notes generated:

void setup() {
  for (int i = 0; i < numTones; i++) {
    pinMode(buttonPins[i], INPUT_PULLUP);
  }
  pinMode(SPEAKER_PIN, OUTPUT);
}

void loop() {
  int pitch = 0;
  for (int i = 0; i < numTones; i++) {
    if (digitalRead(buttonPins[i]) == LOW) {
      pitch = buttonTones[i];
    }
    if (pitch) {
    tone(SPEAKER_PIN, pitch);
    //Note the output is always produced from the speaker
    //tone(pin_num,freq,time)
    //The duration of the tone in milliseconds. If omitted or set to 0, the tone continues until noTone() is called.
  } 
  else {
    noTone(SPEAKER_PIN);
  }
  }

}
