#include <Servo.h>
Servo myservo;
// twelve servo objects can be created on most boards
int pos = 0; 
void setup() {
  myservo.attach(9);
}

void loop() {
  for (pos = 0; pos <= 180; pos += 10) {
    myservo.write(pos);
    delay(150);
  }
  for (pos = 180; pos >= 0; pos -= 10) { 
    myservo.write(pos);              
    delay(150);                       
  }
}
