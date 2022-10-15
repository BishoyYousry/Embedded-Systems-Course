#define LEDA 2
#define LEDB 3
#define LEDC 4
#define LEDD 5
#define LEDE 6
#define LEDF 7
#define LEDG 8
/*
 * You you can use array to optimize the code as following:
 * int leds[7] = {2, 3, 4, 5, 6, 7, 8};
 */
#define DELAY_TIME 1000 


void setup()
{
  pinMode(LEDA, OUTPUT);
  pinMode(LEDB, OUTPUT);
  pinMode(LEDC, OUTPUT);
  pinMode(LEDD, OUTPUT);
  pinMode(LEDE, OUTPUT);
  pinMode(LEDF, OUTPUT);
  pinMode(LEDG, OUTPUT);
  /*
   * You can use for loop to optimize the code as following: 
   * for(int i = 0; i < 7; i++)
   * {
   *  pinMode(leds[i], OUTPUT);
   * }
   */
}

void loop()
{
  zero();
  delay(DELAY_TIME);
  one();
  delay(DELAY_TIME);
  two();
  delay(DELAY_TIME);
  three();
  delay(DELAY_TIME);
  four();
  delay(DELAY_TIME);
  five();
  delay(DELAY_TIME);
  six();
  delay(DELAY_TIME);
  seven();
  delay(DELAY_TIME);
  eight();
  delay(DELAY_TIME);
  nine();
  delay(DELAY_TIME);
}

/*
 * HINT:
 * Some compilers show an error if you write the functions after main()
 * To avoid this, you can add a function prototype before main() as following:
 * 
 * void one();    --> prototype
 * int main()
 * {
 *  .
 *  .
 *  .
 * }
 * void one()     
 * {
 *  .
 *  .
 *  .
 * }
 */

void even()
{
  zero();
  delay(DELAY_TIME);
  two();
  delay(DELAY_TIME);
  four();
  delay(DELAY_TIME);
  six();
  delay(DELAY_TIME);
  eight();
  delay(DELAY_TIME);
}
void odd()
{
  one();
  delay(DELAY_TIME);
  three();
  delay(DELAY_TIME);
  five();
  delay(DELAY_TIME);
  seven();
  delay(DELAY_TIME);
  nine();
  delay(DELAY_TIME);
}

void zero()
{
  digitalWrite(LEDA, HIGH);
  digitalWrite(LEDB, HIGH);
  digitalWrite(LEDC, HIGH);
  digitalWrite(LEDD, HIGH);
  digitalWrite(LEDE, HIGH);
  digitalWrite(LEDF, HIGH);
  digitalWrite(LEDG, LOW);
}

void one()
{
  digitalWrite(LEDA, LOW);
  digitalWrite(LEDB, HIGH);
  digitalWrite(LEDC, HIGH);
  digitalWrite(LEDD, LOW);
  digitalWrite(LEDE, LOW);
  digitalWrite(LEDF, LOW);
  digitalWrite(LEDG, LOW);
}

void two()
{
  digitalWrite(LEDA, HIGH);
  digitalWrite(LEDB, HIGH);
  digitalWrite(LEDC, LOW);
  digitalWrite(LEDD, HIGH);
  digitalWrite(LEDE, HIGH);
  digitalWrite(LEDF, LOW);
  digitalWrite(LEDG, HIGH);
}

void three()
{
  digitalWrite(LEDA, HIGH);
  digitalWrite(LEDB, HIGH);
  digitalWrite(LEDC, HIGH);
  digitalWrite(LEDD, HIGH);
  digitalWrite(LEDE, LOW);
  digitalWrite(LEDF, LOW);
  digitalWrite(LEDG, HIGH);
}

void four()
{
  digitalWrite(LEDA, LOW);
  digitalWrite(LEDB, HIGH);
  digitalWrite(LEDC, HIGH);
  digitalWrite(LEDD, LOW);
  digitalWrite(LEDE, LOW);
  digitalWrite(LEDF, HIGH);
  digitalWrite(LEDG, HIGH);
}

void five()
{
  digitalWrite(LEDA, HIGH);
  digitalWrite(LEDB, LOW);
  digitalWrite(LEDC, HIGH);
  digitalWrite(LEDD, HIGH);
  digitalWrite(LEDE, LOW);
  digitalWrite(LEDF, HIGH);
  digitalWrite(LEDG, HIGH);
}

void six()
{
  digitalWrite(LEDA, HIGH);
  digitalWrite(LEDB, LOW);
  digitalWrite(LEDC, HIGH);
  digitalWrite(LEDD, HIGH);
  digitalWrite(LEDE, HIGH);
  digitalWrite(LEDF, HIGH);
  digitalWrite(LEDG, HIGH);
}


void seven()
{
  digitalWrite(LEDA, HIGH);
  digitalWrite(LEDB, HIGH);
  digitalWrite(LEDC, HIGH);
  digitalWrite(LEDD, LOW);
  digitalWrite(LEDE, LOW);
  digitalWrite(LEDF, LOW);
  digitalWrite(LEDG, LOW);
}

void eight()
{
  digitalWrite(LEDA, HIGH);
  digitalWrite(LEDB, HIGH);
  digitalWrite(LEDC, HIGH);
  digitalWrite(LEDD, HIGH);
  digitalWrite(LEDE, HIGH);
  digitalWrite(LEDF, HIGH);
  digitalWrite(LEDG, HIGH);
}

void nine()
{
  digitalWrite(LEDA, HIGH);
  digitalWrite(LEDB, HIGH);
  digitalWrite(LEDC, HIGH);
  digitalWrite(LEDD, LOW);
  digitalWrite(LEDE, LOW);
  digitalWrite(LEDF, HIGH);
  digitalWrite(LEDG, HIGH);
}
