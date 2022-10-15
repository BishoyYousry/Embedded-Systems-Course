#include <iostream>
using namespace std;


int main()
{
	int x, n, sum = 0;
	cout << "Enter Number: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "No " << i + 1 << ": ";
		cin >> x;
		sum += x;
	}
	cout << "The average is " <<(float)sum / n << "\n";
	return 0;
}