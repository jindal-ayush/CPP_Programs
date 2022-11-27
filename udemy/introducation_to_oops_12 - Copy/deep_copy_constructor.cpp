#include<iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breath;

public:
   Rectangle()
   {
    length = 1;
    breath = 1;
   };
   Rectangle(Rectangle & r){
    length = r.length;
    breath =  r.breath;
   }
//    Rectangle(int l , int b)
//    {
//    setLength(l);
//    setBreath(b);
//    }


    int area()
    {
      return  length *breath;
    }
};
// int main()
// {
//     Rectangle r1(10,5);
//     Rectangle r2(r1)
//     cout << r2.area()<<endl;
//     return 0;
// };
