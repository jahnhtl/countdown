#include <Arduino.h>

void setup() {
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
    // wait for user input
  }

  count = Serial.parseInt();
    
  for(int i = count; i > 0; i--) {
    Serial.println(i);
    delay(1000);
  }

  Serial.println("Ready for Takeoff!");
  delay(2000);
}

