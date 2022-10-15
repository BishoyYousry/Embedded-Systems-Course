#include <iostream>
using namespace std;

int main()
{
	int choice; 
	float x, y; 
	do
	{
	  cout << "Menu: \n"; 
	  cout << "1)Add\t\t2)Subtruct\n3) Multiply\t4)Divide\n";
	  cout << "\nThe choice is: ";
	  cin >> choice;
	  cout << "The First number is: ";
	  cin >> x;
	  cout << "The Second number is: ";
	  cin >> y;
	  cout << "The result is: ";
	  switch (choice)
	  {
	  case 1:
		  cout << x + y << endl;
	      break; 
	  case 2:
		  cout << x - y << endl;
	      break; 
	  case 3:
		  cout << x * y << endl;
	      break; 
	  case 4:
	     cout << x << y << endl; 
	     break; 
	  default: 
		 cout << "Invalid" << endl;
	  }
	  cout << "\n";
    }while (choice == 1 || choice == 2 || choice == 3 || choice == 4);
	return 0;
}