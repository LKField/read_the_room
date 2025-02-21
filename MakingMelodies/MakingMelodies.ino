#include "pitches.h"

// Define the buzzer pin
int buzzerPin = 46;

int notes_song_01() {
  // Define the "Happy Birthday" melody
  int melody[] = {
    NOTE_C4, NOTE_C4, NOTE_D4, NOTE_C4, NOTE_F4, NOTE_E4, // "Happy Birthday to You"
    NOTE_C4, NOTE_C4, NOTE_D4, NOTE_C4, NOTE_G4, NOTE_F4, // "Happy Birthday to You"
    NOTE_C4, NOTE_C4, NOTE_C5, NOTE_A4, NOTE_F4, NOTE_E4, NOTE_D4, // "Happy Birthday dear [Name]"
    NOTE_AS4, NOTE_AS4, NOTE_A4, NOTE_F4, NOTE_G4, NOTE_F4 // "Happy Birthday to You"
  };
  return melody;
}
int duration_song_01() {
  // Define the note durations
  int noteDurations[] = {
    4, 4, 4, 4, 4, 2,
    4, 4, 4, 4, 4, 2,
    4, 4, 4, 4, 4, 4, 2,
    4, 4, 4, 4, 4, 2
  };
  return noteDurations;
}


void setup() {
  int melody = notes_song_01();
  int noteDuration = duration_song_01();
  // Iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 24; thisNote++) {
    // To calculate the note duration, take one second divided by the note type.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(buzzerPin, melody[thisNote], noteDuration);

    // To distinguish the notes, set a minimum time between them.
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);

    // Stop the tone playing:
    noTone(buzzerPin);
  }
}

void loop() {
  // No need to repeat the melody in the loop for this example.
  // The setup() is enough to play it once.
}

