#include <iostream>
using namespace std;

void sum(float n1, float n2);
void sub(float n1, float n2);
void mul(float n1, float n2);
void div(float n1, float n2);

int main()
{
    char operation;
    float number1, number2;
    cout << "Enter two numbers: \n";
    cin >> number1 >> number2;
    cout << "Choose the operation (\'+\', \'-\', \'*\', \'/\'):\n";
    cin >> operation;
    switch (operation)
    {
    case '+':
        sum(number1, number2);
        break;
    case '-':
        sub(number1, number2);
        break;
    case '*':
        mul(number1, number2);
        break;
    case '/':
        div(number1, number2);
        break;
    }
}

void sum(float n1, float n2)
{
    cout << "Summation = " << n1 + n2 << endl;
}

void sub(float n1, float n2)
{
    cout << "Subtraction = " << n1 - n2 << endl;
}

void mul(float n1, float n2)
{
    cout << "Multiplication = " << n1 * n2 << endl;
}

void div(float n1, float n2)
{
    cout << "Division = " << n1 / n2 << endl;
}

