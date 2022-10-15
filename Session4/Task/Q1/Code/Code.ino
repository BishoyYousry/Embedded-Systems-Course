#define LED 5
#define BUZZER 6
#define PUSH_BUTTON1 3
#define PUSH_BUTTON2 4

#define DELAY_TIME 250
int ledLevel = 0;
int btnOld1 = 0, btnOld2 = 0, btnNew1, btnNew2;
void setup()
{
  pinMode(PUSH_BUTTON1, INPUT);
  pinMode(PUSH_BUTTON2, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
}
void loop()
{
  bool btnNew1 = digitalRead(PUSH_BUTTON1);
  bool btnNew2 = digitalRead(PUSH_BUTTON2);
  if(btnOld1 == 0 && btnNew1 == 1)
  {
    ledLevel += 255/5;    
    if(ledLevel > 255)
    {
      ledLevel = 255;
      digitalWrite(BUZZER, HIGH);
      delay(DELAY_TIME);
      digitalWrite(BUZZER, LOW);
    }
    analogWrite(LED, ledLevel);
  }
  if(btnOld2 == 0 && btnNew2 == 1)
  {
    ledLevel -= 255/5;  
    if(ledLevel < 0)
    {
      ledLevel = 0;
      digitalWrite(BUZZER, HIGH);
      delay(DELAY_TIME);
      digitalWrite(BUZZER, LOW);
    }
    analogWrite(LED, ledLevel);
  }
  btnOld1 = btnNew1;
  btnOld2 = btnNew2;
}
