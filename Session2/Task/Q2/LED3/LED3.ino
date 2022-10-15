#define DELAY_YIME 1000

// We can use MACROS instead of these three variables to save the memory 
int redLed = 13;
int yellowLed = 6;
int greenLed = 2;

void setup()
{
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);

  //It is preferred to initialize the state of all LEDs as LOW
  digitalWrite(redLed, LOW);
  digitalWrite(yellowLed, LOW);
  digitalWrite(greenLed, LOW);
  
}

void loop()
{
  digitalWrite(redLed, HIGH);
  delay(DELAY_YIME);
  digitalWrite(redLed, LOW);
  digitalWrite(yellowLed, HIGH);
  delay(DELAY_YIME);
  digitalWrite(yellowLed, LOW);
  digitalWrite(greenLed, HIGH);
  delay(DELAY_YIME);
  digitalWrite(greenLed, LOW);
}
