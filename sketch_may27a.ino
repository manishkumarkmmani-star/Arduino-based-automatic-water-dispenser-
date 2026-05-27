#include <Servo.h>

Servo tapServo;

void setup() {
  tapServo.attach(9);  // Connect servo signal to Pin 9
  
  // 1. Start in the CLOSED position
  tapServo.write(0);
  delay(1000);         // Wait 1 second to make sure it's fully closed at start
  
  // 2. Open the tap to 90 degrees
  tapServo.write(90);
  
  // 3. Keep it open for exactly 8 seconds (8000 milliseconds)
  delay(8000);
  
  // 4. Close the tap back to 0 degrees
  tapServo.write(0);
}

void loop() {
  // Leaving this completely empty means the Arduino does absolutely nothing
  // once the setup function finishes. It will stay off forever.
}
