#define RED 5
#define PERIOD 100
void setup()
{
  pinMode(RED,OUTPUT);
}

void loop( )  
{  
    int i;
    for(i =0;i<=255 ;i+=5)
    {
      analogWrite(RED,i);
      delay(PERIOD);
    }
    for(i = 255;i>=0;i-=5)
    {
      analogWrite(RED,i);
      delay(PERIOD);
    }
}
