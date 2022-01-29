#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter number" << endl;
    cin >> num;

    /*
    
    num 169
    output 321

    9 * 100 + 6 * 10 + 1

a * 100 + b*10 + c
    169 % 10 = 9
    169/10 = 16.9 = 16
    16 % 10 = 6
    16 / 10 = 1

    9 * 100 + 6 * 10 + 1
    */

    int a = num % 10;

    num = num / 10;

    int b = num % 10;

    int c = num / 10;

    int reverse = a * 100 + b * 10 + c;
    cout << "reverse " << reverse;

    return 0;
}