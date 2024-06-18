#include <Seeed_Arduino_SSCMA.h>
#include <pwmWrite.h>

SSCMA AI;
Pwm pwm = Pwm();
const int servoPin5 = 2;  // D1 pin xiao-esp32c3
const int freq = 50;
int lastMovedAngle = -1;

void setup() {
  AI.begin();
  Serial.begin(115200);
  pwm.attach(servoPin5, 5, 500, 1472, 2400);
}

void moveServo(int angle) {
  pwm.writeServo(servoPin5, angle);
  delay(1000);
}

void loop() {
  if (!AI.invoke()) {
    for (int i = 0; i < AI.classes().size(); i++) {
      Serial.print("Class[");
      Serial.print(i);
      Serial.print("] target=");
      Serial.print(AI.classes()[i].target);
      Serial.print(", score=");
      Serial.println(AI.classes()[i].score);

      if (AI.classes()[i].score > 50) {
        int target = AI.classes()[i].target;
        int newAngle = -1;

        if (target == 0) {
          newAngle = 90;
        } else if (target == 1) {
          newAngle = 0;
        } else if (target == 2) {
          newAngle = 180;
        }

        if (newAngle != -1 && newAngle != lastMovedAngle) {
          moveServo(newAngle);
          lastMovedAngle = newAngle;
        }
      }
    }
  }
}
