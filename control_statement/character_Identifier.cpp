#include <iostream>
using namespace std;

int main()
{
    cout << "enter character " << endl;
    char character;
    cin >> character;

    int ascii_value = character;

    cout << ascii_value << endl;

    if (ascii_value >= 65 && ascii_value < 97)
    {
        cout << "Entered character is capital case character";
    }
    else if (ascii_value >= 97 && ascii_value <= 122)
    {
        cout << "entered character is small character";
    }
    else if (ascii_value >= 48 && ascii_value <= 57)
    {
        cout << "entered character is numeric";
    }
    else
    {
        cout << "entered character is special charcter";
    }
    return 0;
}


// 2012 leap year  