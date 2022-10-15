#include <iostream>
using namespace std;


int main()
{
	int x, sum = 0, count = 0;
	cout << "Enter positive number: ";
	cin >> x;
	while (x > 0)
	{
		sum += x;
		cout << "Enter positive number: ";
		cin >> x;
		count++;
	}
	cout << "The average is " << (float)sum / count << "\n";
	return 0;
}
