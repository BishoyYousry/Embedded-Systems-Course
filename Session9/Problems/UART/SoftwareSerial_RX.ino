//RX
#include <SoftwareSerial.h>
SoftwareSerial mySerial(10,11);

void setup() 
{
  mySerial.begin(9600);
  Serial.begin(9600);
}

void loop() 
{
  while(mySerial.available()==0);
  char c = mySerial.read();
  Serial.println(c);
}
