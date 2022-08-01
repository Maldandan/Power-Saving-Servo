# Power-Saving-Servo
_using transistor as a way to save power with a servo motor when the servo is not recieving a signal._

**circuit is shown below.**
![Fantabulous Rottis](https://user-images.githubusercontent.com/109004035/182248309-e91c85a6-7c6b-4cc2-8c44-cf60e1913024.png)

you can see and test simulated circuit [here](https://www.tinkercad.com/things/61N3EOfaYlB-power-saving-servo/editel)

**code used:**
```
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
```
From the code, the servo will start at 45 degree, delay, then will up to 90 and delay again, then up to 135 degrees, and delay
during the delays, you can see that the current reaching the servo will significantly drop! this is causedby the transistor and the abcense of signal.
as the servo recives signals again, the current will go through again, and cut again during delays!

**the Arduino code file is attached !**
