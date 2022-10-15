#include <iostream>

using namespace std;

int main()
{
    int n;
    char c;
    do
    {
        cout << "Enter a number: ";
        cin >> n;
        if(n % 2 == 0) cout << "Even\n";
        else cout << "Odd\n";
        cout << "Try again (y/n) ? ";
        cin >> c;
    }while(c == 'y' || c == 'Y');
    /*
    We can use while loop as follows

    while(true)
    {
        cout << "Enter a number: ";
        cin >> n;
        if(n % 2 == 0) cout << "Even\n";
        else cout << "Odd\n";
        cout << "Try again (y/n) ? ";
        cin >> c;
        if(c == 'N' || c == 'n') break;
    }
    */
}
