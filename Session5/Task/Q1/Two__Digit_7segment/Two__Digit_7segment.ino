#define A   2
#define B   3
#define C   4
#define D   5
#define E   6
#define F   7
#define G   8

#define AA  9 
#define BB  10
#define CC  11
#define DD  12
#define EE  13
#define FF  A0
#define GG  A1

#define DB  A2

int _1st_7_segment[7]={A,B,C,D,E,F,G};
int _2nd_7_segment[7]={AA,BB,CC,DD,EE,FF,GG};
int numbers[10][7]={
                     { 1, 1, 1, 1, 1, 1, 0},  // 0
                     { 0, 1, 1, 0, 0, 0, 0},  // 1
                     { 1, 1, 0, 1, 1, 0, 1},  // 2
                     { 1, 1, 1, 1, 0, 0, 1},  // 3
                     { 0, 1, 1, 0, 0, 1, 1},  // 4
                     { 1, 0, 1, 1, 0, 1, 1},  // 5
                     { 1, 0, 1, 1, 1, 1, 1},  // 6
                     { 1, 1, 1, 0, 0, 0, 0},  // 7
                     { 1, 1, 1, 1, 1, 1, 1},  // 8
                     { 1, 1, 1, 1, 0, 1, 1}  // 9
                   };
                   
void setup() 
{
  pinMode(DB,OUTPUT);
  for(int i=0;i<7;i++)
  {
    pinMode(_1st_7_segment[i],OUTPUT);
    pinMode(_2nd_7_segment[i],OUTPUT);
  }
  Serial.begin(9600);
}

void loop() 
{
  Serial.print("Enter Number:");
  while(Serial.available()==0);
  float input = Serial.parseFloat();
  Serial.println();
  if(input != (int)input)
  {
    digitalWrite(DB,HIGH);
    input*=10;
  }
  int firstNumber  = input / 10;
  int secondNumber = (int)input % 10; //Operands of % operator must be integer
  for(int i=0;i<7;i++)
  {
    digitalWrite(_1st_7_segment[i],numbers[firstNumber][i]);
    digitalWrite(_2nd_7_segment[i],numbers[secondNumber][i]);
  }
}
