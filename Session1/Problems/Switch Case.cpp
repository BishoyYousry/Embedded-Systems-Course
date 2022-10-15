#include <iostream>
using namespace std;


int main()
{
	int year = 2014;
	int checkLeap = year % 4;   //checkLeap = 2
	switch (checkLeap)
	{
	case 0:
		cout << "Leap\n";
		break;
	default:
		cout << "Normal\n";  //Printed
		break;
	}
	return 0;
}