#define TEMP_SENSOR		A0
#define DELAY_TIME		500
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int val = analogRead(TEMP_SENSOR);
  float volt = val / 1023.0 * 5000.0;	
  //Convert analog val voltage to volts in mv
  float temp = (volt - 500) / 10.0;
  //calculate the temp from the equation
  Serial.println(temp);
  delay(DELAY_TIME);
}