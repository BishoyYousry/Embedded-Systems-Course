#define EN          3
#define IN1         4
#define IN2         5
#define PUSH_BUTTON 6
#define POT         A0
#define DELAY_TIME  500
bool oldButton = true, newButton, choose = false; 

void setup() {
  pinMode(EN, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(PUSH_BUTTON, INPUT_PULLUP);
  pinMode(IN2, OUTPUT);
}

void loop() {
  newButton = digitalRead(PUSH_BUTTON);
  delay(10);    //For debouncing
  if(oldButton == 1 && newButton == 0)
  {
    choose = !choose;
    switch(choose)
    {
      case false:
        clockWise();
        break;
      case true:
        antiClockWise();
        break;
    }
  }
  oldButton = newButton;
  float potVal = analogRead(POT);
  analogWrite(EN, (potVal/1023)*255);
}




void clockWise(void)
{
  digitalWrite(EN, LOW);
  delay(DELAY_TIME);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
}

void antiClockWise(void)
{
  digitalWrite(EN, LOW);
  delay(DELAY_TIME);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
}