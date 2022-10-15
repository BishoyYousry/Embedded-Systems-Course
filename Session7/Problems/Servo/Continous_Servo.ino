#include<Servo.h>

#define SERVO_PIN   9
#define DELAY_TIME  2000
Servo servo;

void setup() {
  servo.attach(SERVO_PIN);
}

void loop() 
{
 servo.attach(SERVO_PIN);
 servo.write(180);
 delay(DELAY_TIME);

 servo.detach();
 delay(DELAY_TIME);
 
 servo.attach(SERVO_PIN);
 servo.write(0);
 delay(DELAY_TIME); 

 servo.detach();
 delay(DELAY_TIME);
}
