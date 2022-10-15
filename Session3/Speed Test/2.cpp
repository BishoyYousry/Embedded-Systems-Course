#include <iostream>
using namespace std;

int main()
{
    int x = 2;
    int number_2;
    switch(x)
    {
    case (1)  :
    number_2 = 5;
    case (2)  :
    number_2 = 6;
    case (3)  :
    number_2 = 8;
    break;
    default:
    number_2 = 9;
    }
        cout << number_2;

    return 0;
}
