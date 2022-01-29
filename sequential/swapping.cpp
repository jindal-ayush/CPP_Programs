#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 2;
    // int c;

    // c = a;   // c = 1
    // a = b;   // b =2, a =2
    // b = c;  // b = 2

    a = a + b; // a = 3
    b = a - b; // b = 1
    a = a - b; // a = 2

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}