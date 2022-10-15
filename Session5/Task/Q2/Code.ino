#include <LiquidCrystal.h>

#define NUMBER_OF_COLUMNS	16
#define NUMBER_OF_ROWS		2
#define LED 				6
#define RS					12
#define EN					11
#define D4					5
#define D5					4
#define D6					3
#define D7					2
#define POT 				A0
#define COLUMN3 			3
#define ROW1  				1
#define MAX_ANALOG_READ		1023
#define MAX_DIGITAL			255
#define MAX_VOLTS			5

LiquidCrystal lcd1(RS, EN, D4, D5, D6, D7);

void setup()
{
  lcd1.begin(NUMBER_OF_COLUMNS, NUMBER_OF_ROWS); 
  pinMode(LED, OUTPUT);
  pinMode(POT, INPUT);
  lcd1.print("*LED Intensity*");
}

void loop()
{
  float potVal = analogRead(POT);
  float ledIntensity = (potVal / MAX_ANALOG_READ) * MAX_VOLTS;
  lcd1.setCursor(COLUMN3, ROW1);
  lcd1.print(ledIntensity);
  lcd1.print(" Volts");
  analogWrite(LED, (potVal / MAX_ANALOG_READ) * MAX_DIGITAL);
}