#include <iostream>
using namespace std;

class stu
{
    int id;
    char name[20];
    float fee;

public:
    //     void get(){
    //         cout<<"enter id , name, fee"<<endl;
    //         cin>>id>>name>>fee;
    //         cout<<"id="<<id<<endl;
    //         cout<<"name="<<name<<endl;
    //         cout<<"fee="<<fee<<endl;
    //     }
    // };
    void get();
};
void stu::get()
{
    cout << "enter id , name, fee" << endl;
    cin >> id >> name >> fee;
    cout << "id=" << id << endl;
    cout << "name=" << name << endl;
    cout << "fee=" << fee << endl;
}

int main()
{
    stu s;
    s.get();
};