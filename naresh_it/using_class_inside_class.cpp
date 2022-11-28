#include <iostream>
using namespace std;
class stu
{
    int id, sub[6];
    char name[20];
public:
    void getstu();
    void result();
};
void stu::getstu()
{
    cout << "enter id, name";
    cin >> id >> name;
    cout << "enter subject marks";
    for (int i = 0; i < 6; i++)
    {
        cin >> sub[i];
    }
};
void stu::result()
{
    int total;
    int avg;
    cout << "id"<<id << endl;
    cout << "name"<<name << endl;
    for(int i =0; i<6; i++)
        total  = total+sub[i];
        avg = total/6.0;
        cout<<"total marks= "<<total<<endl;
        cout<<"avg = "<<avg;
   
    for (int i = 0; i < 6; i++)
        if(sub[i]>35)
        
        {
         cout<<"fail";
           goto last;
        }
             last:
      cout<<"pass";
          
    
};

int main(){
stu s;
s.getstu();
s.result();
}
