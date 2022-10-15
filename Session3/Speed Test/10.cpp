#include <iostream>
using namespace std;

int main()
{
    int x =5;
    switch(x)
    {
    case 1:
        cout << "A";
        break;
    case 2:
        cout << "B";
        break;
    case 3:
        cout << "C";
        break;
    case 1*2+3:
        cout << "D";
        break;
    case 5:
        cout << "E";
        break;
    }
}
