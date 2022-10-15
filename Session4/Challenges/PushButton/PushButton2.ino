#define LED 7
#define PUSH_BUTTON 3
bool buttonOld = 0;
bool buttonNew;
bool ledState = 0;
void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(PUSH_BUTTON, INPUT);
}

void loop()
{
  buttonNew = digitalRead(PUSH_BUTTON);
  if(buttonNew == 1 && buttonOld == 0)
  {
    ledState = !ledState;
    digitalWrite(LED, ledState);
  }
  buttonOld = buttonNew;
}
