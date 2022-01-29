#include <iostream>
using namespace std;

int main()
{

    int a, b, c;

    cout << "enter first number" << endl;
    cin >> a;

    cout << "enter second number" << endl;
    cin >> b;

    cout << "enter third number" << endl;
    cin >> c;

    if (a > b && a > c)
    {
        cout << "a is greatest";
    }
    else if (b > a && b > c)
    {
        cout << "b is greatest" << endl;
    }
    else if (c > a && c > b)
    {
        cout << "c is greatestr" << endl;
    }
    else
    {
        cout << "a,b,c are equal" << endl;
    }

    return 0;
}

//A     IT IS CAPITAL ALABH

//a   it is a small case albha

// 0123455799 its a number

// special cheracter
// A =65 Z =96
// a=97 z=122
// 0=48 9 = 57
//any special character
// identify a charchtar is albhet aur numeric
