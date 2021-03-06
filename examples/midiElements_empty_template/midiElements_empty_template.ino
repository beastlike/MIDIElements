// MIDI Elements empty template
// by Tomash Ghz
// www.tomashg.com
// ghz.tomash@gmail.com

#include <MIDIElements.h>

boolean debug=false; // print to serial instead of midi
boolean secondary=false; // enable secondary midi messages
int midiChannel=1; // midi channel number

// declare all your components here

void setup(){
  usbMIDI.setHandleNoteOff(OnNoteOff); //set event handler for note off
  usbMIDI.setHandleNoteOn(OnNoteOn); //set event handler for note on
  usbMIDI.setHandleControlChange(OnControlChange); // set event handler for CC
}

void loop(){
  
  // add here all the input component reads
  
  usbMIDI.read(); // read all the incoming midi messages
}

//====================================================================
// event handlers
void OnNoteOn(byte channel, byte note, byte velocity){
  // add all your output component sets that will trigger with note ons
}

void OnNoteOff(byte channel, byte note, byte velocity){
  // add all your output component sets that will trigger with note ons
}

void OnControlChange(byte channel, byte control, byte value){
  // add all your output component sets that will trigger with cc
}

