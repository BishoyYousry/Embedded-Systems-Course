#define EN          3
#define IN1         4
#define IN2         5
#define DELAY_TIME  500

void setup() {
  pinMode(EN, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  
}

void loop() {
  clockWise();
  delay(DELAY_TIME);
  stop();
  antiClockWise();
  delay(DELAY_TIME);
  stop();
}

void stop(void)
{
  digitalWrite(EN, LOW);
  delay(DELAY_TIME);
}

void clockWise(void)
{
  digitalWrite(EN, HIGH);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN1, LOW);
}

void antiClockWise(void)
{
  digitalWrite(EN, HIGH);
  digitalWrite(IN1, LOW);
  digitalWrite(IN1, HIGH);
}
