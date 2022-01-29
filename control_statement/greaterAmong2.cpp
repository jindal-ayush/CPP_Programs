#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter first number" << endl;
    cin >> a;

    cout << "enter second number" << endl;
    cin >> b;

    if (a > b)
    {
        cout << a << " is greater" << endl;
    }
    else if (a == b)
    {
        cout << "both number are equal";
    }
    else
    {
        cout << b << " is greater" << endl;
    }

    return 0;
} 