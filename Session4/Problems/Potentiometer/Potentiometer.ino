#define LED 3
#define POT A5
void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(POT, INPUT);
}

void loop()
{
  long potValue = analogRead(POT);
  long brightness = map(potValue, 0, 1023, 0, 255);
  //Another way
  //long brightness = potValue / 1023.0 * 255;
  //analogWrite(LED, brightness);
  analogWrite(LED, brightness);
}
