#include <iostream>
using namespace std;
int main()
{
    char oper;
    double num1, num2;

    cout << "Choose an operator (+, -, *, /): ";
    cin >> oper;
    cout << "\nEnter first number: ";
    cin >> num1;
    cout << "\nEnter second number: ";
    cin >> num2;

    switch (oper)
    {
    case '+':
        cout << num1 << "+" << num2 << "=" << (num1 + num2);
        break;

    case '-':
        cout << num1 << "-" << num2 << "=" << (num1 - num2);
        break;

    case '*':
        cout << num1 << "*" << num2 << "=" << (num1 * num2);
        break;

    case '/':
        if (num2 != 0.0)
            cout << num1 << "/" << num2 << "=" << (num1 / num2);
        else
            cout << "Divide by Zero situation";
        break;

    default:
        cout << oper << " is an invalid operator";
        
    }
    return 0;
}