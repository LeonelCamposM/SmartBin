#include <pwmWrite.h>

Pwm pwm = Pwm();
const int servoPin4 = 1;

void setup() {
  Serial.begin(115200);
  pwm.attach(servoPin4, 4, 500, 1472, 2400);
  pwm.printDebug(); 
}

void loop() {
  int position;
  for (position = 0; position <= 180; position += 30) {
    pwm.writeServo(servoPin4, position);
    delay(1000);
  }
}
