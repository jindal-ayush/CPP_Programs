// If a Number is divisible by 2 => Number is even
// Else => Number is Odd

// Step1: Start
// Step2: Take a Number from User
// Check Number is Divisible by 2
// Case1: Yes -> then Print Number is Even
// Case2: No -> then Print Number is Odd

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "Number is Even";
    }

    else
    {
        cout << "Number is Odd";
    }

    return 0;
}