#include <iostream>
using namespace std;

class Employee
{
  int id;
  static int count;

public:
  void setData(void)
  {
    cout << "enter the id" << endl;
    cin >> id;
    count++;
  }
}
