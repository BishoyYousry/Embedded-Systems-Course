#define TRIG			2
#define ECHO			3
#define BUZZER			4
#define DELAY_TIME  	50
#define MAX_DISTANCE	50
#define MIN_DISTANCE	5
void setup()
{
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(BUZZER, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(TRIG, LOW);
  delayMicroseconds(5);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  int totalTimeInMicroseconds = pulseIn(ECHO, HIGH);	
  //pulseIn() returns the total time in microseconds from sending the signal to receiving it
  int distance = (totalTimeInMicroseconds * 0.0001 / 2.0) * 343;
  //distance = time * speed of sound
  Serial.println(distance);
  if(distance > MAX_DISTANCE || distance < MIN_DISTANCE)
    digitalWrite(BUZZER, HIGH);
  else
    digitalWrite(BUZZER, LOW);
  delay(DELAY_TIME);
}