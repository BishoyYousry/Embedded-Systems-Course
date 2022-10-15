#define BUZZER 13
#define DELAY_TIME 1000
void setup()
{
  pinMode(BUZZER, OUTPUT);
}

void loop()
{
  digitalWrite(BUZZER, HIGH);
  delay(DELAY_TIME);
  digitalWrite(BUZZER, LOW);
  delay(DELAY_TIME);
}
