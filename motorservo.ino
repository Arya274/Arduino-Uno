#include <servo.h>
const int Y_pin = A0; // analog pin
conted to Y output

Servo myservo;

int val;

void setup() {
  myservo.attach(7);
}

void loop() {
  val = analogRead(Y_pin);
  val = map(val, 0, 1023, 0, 180);
  myservo.writh(val);
  delay(15);
}