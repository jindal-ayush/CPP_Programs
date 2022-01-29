#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int amount;
    cout << "enter amount: ";
    cin >> amount;

    int gross_amount;

    if (amount > 1000)
    {
        gross_amount = amount - (10 * amount) / 100;
    }
    else
    {
        gross_amount = amount;
    }
    cout << "Total Payable Amount: " << gross_amount;
    getch();
    return 0;
}