/*
 * File: main.cpp
 * Description: Simple countdown program for Arduino using Serial input.
 * Author: Philipp Jahn
 * Date: 2025-10-13
 */

#include <Arduino.h>

void setup() {
  // Initialize serial communication at 115200 baud rate for communication with the computer via USB
  Serial.begin(115200);
}


void loop() {
  int count;

  // Flush any existing data in the serial buffer
  while (Serial.available()) {
    Serial.read();
  }

  Serial.print("\nEnter countdown start number: ");

  while (!Serial.available()) {
    // Wait for user input
  }

  // Serial.parseInt() converts the text input to an integer
  count = Serial.parseInt();

  for(int i = count; i > 0; i--) {
    Serial.println(i);
    delay(1000);
  }

  Serial.println("Ready for Takeoff!");

  delay(2000);
}


