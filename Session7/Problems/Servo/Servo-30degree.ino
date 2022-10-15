#include <Servo.h>

#define SERVO_PIN   9   
Servo servo;
void setup() 
{
  servo.attach(SERVO_PIN);
  servo.write(0);
}

void loop()
{
  for(int i=0;i<=180;i+=30)
  {
     servo.write(i);
     delay(1000); 
  }
}
