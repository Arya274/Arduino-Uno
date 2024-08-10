//Sertakan library servo
#include <servo.h>

Servo myservo;
void setup() {
  myservo.attach(9); // servo terhubung pin 9
}

void loop() {
  //sudut 0
  myservo.writh(0);
  delay(2000);
  //sudut 90
  myservo.writh(90);
  //sudut 180
  myservo.writh(180);
  delay(2000);
}






