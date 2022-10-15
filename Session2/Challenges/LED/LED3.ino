#define delayTime 1000
int redLed = 13;
int yellowLed = 6;
int greenLed = 2;

void setup()
{
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
}

void loop()
{
  digitalWrite(redLed, HIGH);
  delay(delayTime);
  digitalWrite(redLed, LOW);
  digitalWrite(yellowLed, HIGH);
  delay(delayTime);
  digitalWrite(yellowLed, LOW);
  digitalWrite(greenLed, HIGH);
  delay(delayTime);
  digitalWrite(greenLed, LOW);
}
