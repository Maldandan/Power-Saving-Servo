#include <Servo.h>

Servo myservo;
int i;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(7);
}

void loop() {
  // put your main code here, to run repeatedly:
  myservo.write(45);
  delay(1000);
  myservo.write(90);
  delay(1000);
  myservo.write(135);
  delay(1000);
  for(i=135;i>45;i-=2){
    myservo.write(i);
    delay(100);
  }
}