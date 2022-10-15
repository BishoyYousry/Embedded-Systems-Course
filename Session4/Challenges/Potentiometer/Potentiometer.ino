#define LED 3
#define POT A5
#define BUZZER 8
void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(POT, INPUT);
}

void loop()
{
  long potValue = analogRead(POT);
  long brightness = map(potValue, 0, 1023, 0, 255);
  analogWrite(LED, brightness);
  if(brightness >= 255 * 90.0 / 100)
    digitalWrite(BUZZER, HIGH);
  else
    digitalWrite(BUZZER, LOW);
}
