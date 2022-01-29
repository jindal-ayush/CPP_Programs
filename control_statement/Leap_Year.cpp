#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "enter year" << endl;
    cin >> a;

    if (a % 4 == 0)
    {
        cout << "leap year";
    }
    else
    {
        cout << "not leap year";
    }

    return 0;
}
