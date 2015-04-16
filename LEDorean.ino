#include "FastLED.h"
#include <avr/pgmspace.h>
#include <SoftwareSerial.h>

void setup() { 
  ledstrip_setup();
  messages_setup();
  //cloud_setup();
  printOk();
  clearScreen();
}

void loop() {
  int angry;
  angry = pressure_loop();

  if (angry == 1) {
    drawFinger();
  } else {
    messages_loop();
    //cloud_loop ();
  }
}
