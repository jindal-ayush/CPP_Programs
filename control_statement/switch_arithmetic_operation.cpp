#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char choice;
    cout << "Enter any 2 Numbers: " << endl;
    cin >> a >> b;

    cout << "Press + for addition" << endl
         << "Press - for subtraction" << endl
         << "Press * for Multiplication" << endl
         << "Press / for Division " << endl;
    cin >> choice;

    switch (choice)
    {
    case '+':
        cout << a << choice << b << " = " << a + b;
        break;

    case '-':
        cout << a << choice << b<< " = " << a - b;
        break;

    case '*':
        cout << a << choice << b << " = "<< a * b;
        break;

    case '/':
        cout << a << choice << b <<" = "<< a / b;
        break;

    default:
        cout << "Invalid operation";
        break;
    }
    return 0;
}

