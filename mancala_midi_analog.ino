/* USB MIDI AnalogControlChange Example

   You must select MIDI from the "Tools > USB Type" menu
   http://www.pjrc.com/teensy/td_midi.html

   This example code is in the public domain.
*/

#include <Bounce.h>

// the MIDI channel number to send messages
const int channel = 1;
// the MIDI continuous controller for each analog input
const int controllerA0 = 10; 
const int controllerA1 = 11; 
const int controllerA2 = 12; 
const int controllerA3 = 13; 
const int controllerA4 = 14; 
const int controllerA5 = 15; 
const int controllerA6 = 16; 
const int controllerA7 = 17; 
const int controllerA8 = 18; 
const int controllerA9 = 19; 
const int controllerA10 = 20; 
const int controllerA11 = 21; 
const int knobA12 = 22; 
const int knobA13 = 23; 
 // total of 14 analog pins




void setup() {
}

// store previously sent values, to detect changes
int previousA0 = -1;
int previousA1 = -1;
int previousA2 = -1;
int previousA3 = -1;
int previousA4 = -1;
int previousA5 = -1;
int previousA6 = -1;
int previousA7 = -1;
int previousA8 = -1;
int previousA9 = -1;
int previousA10 = -1;
int previousA11 = -1;
int previousA12 = -1;
int previousA13 = -1;


elapsedMillis msec = 0;

void loop() {
  // only check the analog inputs 50 times per second,
  // to prevent a flood of MIDI messages
  if (msec >= 20) {
    msec = 0;
    int n0 = analogRead(10) / 8;
    int n1 = analogRead(11) / 8;
    int n2 = analogRead(12) / 8;
    int n3 = analogRead(13) / 8;
    int n4 = analogRead(6) / 8;
    int n5 = analogRead(7) / 8;
    int n6 = analogRead(0) / 8;
    int n7 = analogRead(1) / 8;
    int n8 = analogRead(2) / 8;
    int n9 = analogRead(3) / 8;
    int n10 = analogRead(4) / 8;
    int n11 = analogRead(5) / 8;
    int n12 = analogRead(8) / 8;
    int n13 = analogRead(9) / 8;



    // only transmit MIDI messages if analog input changed
    if (n0 != previousA0) {
      usbMIDI.sendControlChange(controllerA0, n0, channel);
      previousA0 = n0;
    }
    if (n1 != previousA1) {
      usbMIDI.sendControlChange(controllerA1, n1, channel);
      previousA1 = n1;
    }
    if (n2 != previousA2) {
      usbMIDI.sendControlChange(controllerA2, n2, channel);
      previousA2 = n2;
    }
    if (n3 != previousA3) {
      usbMIDI.sendControlChange(controllerA3, n3, channel);
      previousA3 = n3;
    }
    if (n4 != previousA4) {
      usbMIDI.sendControlChange(controllerA4, n4, channel);
      previousA4 = n4;
    }
    if (n5 != previousA5) {
      usbMIDI.sendControlChange(controllerA5, n5, channel);
      previousA5 = n5;
    }
    if (n6 != previousA6) {
      usbMIDI.sendControlChange(controllerA6, n6, channel);
      previousA6 = n6;
    }    
    if (n7 != previousA7) {
      usbMIDI.sendControlChange(controllerA7, n7, channel);
      previousA7 = n7;
    }    
    if (n8 != previousA8) {
      usbMIDI.sendControlChange(controllerA8, n8, channel);
      previousA8 = n8;
    }    
    if (n9 != previousA9) {
      usbMIDI.sendControlChange(controllerA9, n9, channel);
      previousA9 = n9;
    }    
    if (n10 != previousA10) {
      usbMIDI.sendControlChange(controllerA10, n10, channel);
      previousA10 = n10;
    }    
    if (n11 != previousA11) {
      usbMIDI.sendControlChange(controllerA11, n11, channel);
      previousA11 = n11;
    }    
    if (n12 != previousA12) {
      usbMIDI.sendControlChange(knobA12, n12, channel);
      previousA12 = n12;
    }    
    if (n13 != previousA13) {
      usbMIDI.sendControlChange(knobA13, n13, channel);
      previousA13 = n13;
    }
  }

  // MIDI Controllers should discard incoming MIDI messages.
  // http://forum.pjrc.com/threads/24179-Teensy-3-Ableton-Analog-CC-causes-midi-crash
  while (usbMIDI.read()) {
    // ignore incoming messages
  }
}

