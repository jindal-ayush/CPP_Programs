#include <iostream>
using namespace std;

class Person
{
private:
    int age;
  friend void compareAge(Person p1, Person p2);


public:
    void setAge(int _age)
    {
        age = _age;
    }
    // friend void compareAge(Person p1, Person p2);
};

void compareAge(Person p1, Person p2)
{
    if (p1.age > p2.age)
    {
        cout << p1.age << "is greater";
    }

    else
    {
        cout << p2.age << "is greater";
    }
}
int main()
{
    Person person1, person2;
    person1.setAge(15);
    person2.setAge(20);

    compareAge(person1, person2);
}