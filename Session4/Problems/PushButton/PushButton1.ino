#define LED 7
#define PUSH_BUTTON 3
void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(PUSH_BUTTON, INPUT);
}

void loop()
{
  bool val = digitalRead(PUSH_BUTTON);
  if(val == 0)
    digitalWrite(LED, HIGH);
  else
    digitalWrite(LED, LOW);
}
