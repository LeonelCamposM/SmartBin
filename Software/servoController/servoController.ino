#include <pwmWrite.h>

Pwm pwm = Pwm();
const int servoPin5 = 2; // D1 pin xiao-esp32S3
const int freq = 50;

void setup() {
  Serial.begin(115200);
  pwm.attach(servoPin5, 5, 500, 1472, 2400);
  pwm.printDebug(); 
}

void loop() {
  int position;
  for (position = 0; position <= 180; position += 30) {
    pwm.writeServo(servoPin5, 180 - position);
    delay(1000);
  }
}
