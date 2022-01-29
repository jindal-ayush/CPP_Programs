#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "enter number" << endl;
    cin >> a;

    int result = a % 2; // 1,0
    switch (result)
    {
    case 0:
        cout << "number is even";
        break;

    default:
        cout << "number is odd";
        break;
    }
    return 0;
}