#include <iostream>
using namespace std;
class student
{
    int rollNo;
    string name;
    int chemistry;
    int physics;
    int maths;

public:
    student(int r, string n, int m, int p, int c)
    {
        int rollNo = r;
        string name = n;
        int chemistry = c;
        int physics = p;
        int maths = m;
    };
    int total_marks()
    {
        return chemistry+ physics + maths;
    };
    char grade(){
        float average = total_marks()/3;
        if(average>60){
            return 'A';
        }
        else if(average>=40 && average<60){
           return 'b';

        }
        else{
            return 'c';
        }

    };
};
int main(){
  int rollNo;
  string name;
  int m,p,c;
  cout<<"enter roll number of a student: ";
  cin>>rollNo;
  cout<<"enter name: ";
  cin>>name;
  cout<<"enter subject marks: ";
  cin>>m,p,c;
  student s(rollNo , name, m,p, c);
  cout<<"total marks"<<s.total_marks()<<endl;
  cout<<"grade of student:"<<s.grade()<<endl;



};  
