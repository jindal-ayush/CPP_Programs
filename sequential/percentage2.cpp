#include <iostream>
using namespace std;

int main()
{
    int first;
    cout << "first semester marks \n";
    cin >> first;

    int second;
    cout << "seconds semester marks\n";
    cin >> second;

    int third;
    cout << "enter third semester\n";
    cin >> third;

    int fourth;
    cout << "enter fourth semester marks\n";
    cin >> fourth;

    int fifth;
    cout << "enter fifth semester marks\n";
    cin >> fifth;

    int sixth;
    cout << "enter sixth semester marks\n";
    cin >> sixth;

    int total_marks;
    cout << "total marks";
    cin >> total_marks;

    int sum;
    sum = first + second + third + fourth + fifth + sixth;
    cout << "sum: " << sum << "\n";

    int percentage;
    percentage = 100 * sum / total_marks;
    cout << "percentage: " << percentage;

    return 0;
}