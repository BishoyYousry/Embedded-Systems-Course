#define LED   13
void setup() {
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
}

void loop() 
{
  while(Serial.available()==0);
  char c = Serial.read();
  if(c == '0')
  digitalWrite(LED,LOW);
  else
  digitalWrite(LED,HIGH);
}
