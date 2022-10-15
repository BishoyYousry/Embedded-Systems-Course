#include <Servo.h>
#define SERVO_PIN   9
#define POT         A0
Servo servo;
void setup() 
{
  servo.attach(SERVO_PIN);
}

void loop() 
{
  float reading = analogRead(POT);
  servo.write(reading*180/1023);
  delay(500);
}
