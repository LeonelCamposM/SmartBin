#include <Seeed_Arduino_SSCMA.h>
#include <pwmWrite.h>

SSCMA AI;
Pwm pwm = Pwm();
const int servoPin5 = 2; // D1 pin xiao-esp32c3
const int freq = 50;

void setup()
{
  AI.begin();
  Serial.begin(9600);
  pwm.attach(servoPin5, 5, 500, 1472, 2400);
}

void moveServo(int angle)
{
  pwm.writeServo(servoPin5, angle);
  delay(1000);
}

void loop()
{
  if (!AI.invoke())
  {
    for (int i = 0; i < AI.classes().size(); i++)
    {
      Serial.print("Class[");
      Serial.print(i);
      Serial.print("] target=");
      Serial.print(AI.classes()[i].target);
      Serial.print(", score=");
      Serial.println(AI.classes()[i].score);
      
      int target = AI.classes()[i].target;
      if (target == 0) {
        moveServo(90);
      } else if (target == 1) {
        moveServo(0); 
      } else if (target == 2) {
        moveServo(180); 
      }
    }
  }
}