#include <Arduino.h>
#include <avr/power.h>

int buzzerPin = 0;
int tempo = 100;

// Merry Christmas
const int noteCount = 27;
char notes[noteCount] =  {'e', 'e', 'e', 'e', 'e', 'e', 'e', 'g', 'c', 'd', 'e', ' ', 'f', 'f', 'f', 'f', 'f', 'e', 'e', 'e', 'e', 'e', 'd', 'd', 'e', 'd', 'g'};
int duration[noteCount] = {2,   2,   4,   2,   2,   4,   2,   2,   2,   2,   4,   2,   2,   2,   3,   1,   2,   2,   2,   1,   1,   2,   2,   2,   2,   4,   4}; 
const int toneCount = 8;
char notesName[toneCount] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'G' };
int tones[toneCount] = {220, 247, 261, 293, 329, 349, 392, 415 };

// // Happy Birthday
// const int noteCount = 28;
// char notes[noteCount] =  {'z', 'z', 'a', 'z', 'c', 'b', ' ', 'z', 'z', 'a', 'z', 'd', 'c', ' ', 'z', 'z', 'g', 'e', 'c', 'b', 'a', ' ', 'f', 'f', 'e', 'c', 'd', 'c'};
// int duration[noteCount] = {1,   1,   2,   2,   2,   4,   2,   1,   1,   2,   2,   2,   4,   2,   1,   1,   2,   2,   2,   4,   4,   2,   1,   1,   2,   2,   4,   4}; 
// const int toneCount = 10;
// char notesName[toneCount] = {'z', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'G' };
// int tones[toneCount] = {196, 208, 220, 247, 261, 293, 329, 349, 392, 415 };

void playTheTone(char note, int duration) {
  for (int i = 0; i < toneCount; i++) {
    if (note == notesName[i]) {
      tone(buzzerPin, tones[i], duration);
    }
  }
}

void setup() {
  clock_prescale_set(clock_div_2);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  for (int i = 0; i < noteCount; i++) {
    if (notes[i] == ' ') {
      delay(duration[i] * tempo);
    } else {
      playTheTone(notes[i], duration[i] * tempo);
    }
    
    delay((tempo*2)*duration[i]);
  }  

  delay(1000);
}