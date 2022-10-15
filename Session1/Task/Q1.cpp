#include <iostream>

using namespace std;

int main()
{
    int n;
    float sum = 0;
    cout << "How many numbers you will enter? ";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        float temp;
        cout << "Number " << i << " = ";
        cin >> temp;
        sum += temp;
    }
    cout << "Summation = " << sum;
}
