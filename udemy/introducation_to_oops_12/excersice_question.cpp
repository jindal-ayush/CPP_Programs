#include <iostream>
using namespace std;

class Student
{
private:
    int rollno;
    string name;
    int hindi;
    int english;
    int math;

public:
    Student(int r, string n, int h, int e, int m)
    {
        rollno = r;
        name = n;
        hindi = h;
        english = e;
        math = m;
    }
    int total()
    {
        return hindi + english + math;
    }
    char grade()
    {
        float average = total() / 3;
        if (average > 60)
           return 'A';


        else if (average >= 40 && average < 60)
          return 'b';
        else
            return 'c';
    }
};
int main()
{
    int roll;
    string name;
    int h, e, m;
    cout << "enter roll no";
    cin >> roll;
    cout << "enter name";
    cin >> name;
    cout << "enter subject marks";
    cin >> h;
    cin>>e;
    cin>>m;
    Student s(roll, name, h, e, m);

    cout << "total marks" << s.total() << endl;
    cout << "grade of students " << s.grade() << endl;
}