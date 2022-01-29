#include <iostream>
using namespace std;

int main()
{
    int amount;

    cout << "enter amount" << endl;
    cin >> amount;

    int total_amount;
    if (amount > 5000)
    {
        total_amount = amount - (30 * amount) / 100;
    }
    else if (amount>2000)
    {

        total_amount = amount - (20* amount) /100;
    }
    else if (amount == 1200)
    {
        total_amount = amount - (12* amount) / 100;
    }
    else if (amount>1000)
    {
        total_amount = amount - (10* amount) /100;
    }
    else
    {
        total_amount = amount;
    }
     cout << "total payment amount " << total_amount;

    return 0;
}

// 1000-2000= 10% 2-5=20% 5000%30