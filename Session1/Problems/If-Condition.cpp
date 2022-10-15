#include <iostream>
using namespace std;


int main()
{
	int x;
	cin >> x;
	if (x > 0)
	{
		cout << "Positive\n";
	}
	else if (x == 0)
	{
		cout << "Zero\n";
	}
	else
	{
		cout << "Negative\n";
	}
}