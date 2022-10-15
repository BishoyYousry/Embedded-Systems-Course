#include <iostream>

using namespace std;

int main()
{
    char letter = 'A';
    switch(letter)
    {
        case 'A':
            cout << "Hello ";
        case 'B':
            cout << "World";
            break;
        case 'C':
            cout << "Hi";
    }
}
