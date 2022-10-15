//TX
#include <SoftwareSerial.h>
SoftwareSerial mySerial(2,3);

void setup()
{
  Serial.begin(9600);
  mySerial.begin(9600);
}

void loop()
{
  mySerial.print("ON");
  delay(1000);
  mySerial.print("OFF");
  delay(1000);
}
