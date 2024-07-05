#include "Arduino.h"
// the setup function runs once when you press reset or power the board
#define delay_ 1000
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}
// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  delay(delay_);                    // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  delay(delay_);                    // wait for a second
  //Serial.write("Hello");
}
