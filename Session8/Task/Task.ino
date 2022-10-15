/*
 * To know more about interrupts, visit website:
 * https://dronebotworkshop.com/interrupts/
 */
#define BUTTON1 3
#define BUTTON2 2
#define EN     6
#define IN2    7   
#define IN1    4 

void setup()
{
    noInterrupts();
    pinMode(BUTTON1,INPUT_PULLUP);
    pinMode(BUTTON2,INPUT_PULLUP);
    pinMode(EN, OUTPUT);
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    attachInterrupt(INT1 , clkwise , FALLING);
    PCICR  |= 0b00000100;
    PCMSK2 |= 0b00000100;
    interrupts();
}    

void loop()
{
}
void clkwise()
{
  digitalWrite(EN,HIGH);
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  
}
void anticlkwise()
{
  digitalWrite(EN,HIGH);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
}
ISR(PCINT2_vect) // port d 
{
  digitalWrite(EN,HIGH);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
}
