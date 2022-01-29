#include <iostream>
using namespace std;

int main()
{
    int radius;
    cout << "enter redius";
    cin >> radius;

    float pi = 3.14;
    float circumference = 2 * pi * radius;

    cout << "Circumference of circle: " << circumference;
    return 0;
}