#define RED 5
#define PERIOD 100
void setup()
{
  pinMode(RED,OUTPUT);
}

void loop( )  
{  
    int s = 5;
    for(int i =0;i>=0 && i<=255 ;i+=s)
    {
      analogWrite(RED,i);
      delay(PERIOD);
      if(i == 255)
        s*=-1;
    }
}
