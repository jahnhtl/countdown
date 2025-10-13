#include <Arduino.h>

void setup() {
  Serial.begin(115200);
}


void loop() {
  int count;

  Serial.print("\nEnter countdown start number: ");

  count = Serial.read();

  for(int i = count; i > 0; i--) {
    Serial.println(i);
    delay(1000);
  }

  Serial.println("Ready for Takeoff!");

  delay(2000);
}

