#define DELAY_TIME 1000
int led = 9;

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  digitalWrite(led, HIGH);
  delay(DELAY_TIME);
  digitalWrite(led, LOW);
  delay(DELAY_TIME);
}
