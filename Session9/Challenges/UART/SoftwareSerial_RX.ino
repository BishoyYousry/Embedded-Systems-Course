//RX
#include <SoftwareSerial.h>
SoftwareSerial mySerial(10,11);

void setup() 
{
  pinMode(LED_BUILTIN,OUTPUT);
  mySerial.begin(9600);
  Serial.begin(9600);
}

void loop() 
{
  while(mySerial.available()==0);
  String state = mySerial.readString();
  if(state == "ON")
  {
    digitalWrite(LED_BUILTIN,HIGH);
  }
  else
  {
    digitalWrite(LED_BUILTIN,LOW);
  }
}
