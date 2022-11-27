#include<iostream>
using namespace std;

class Rectangle
{
    public:

    int length;
    int breath;

    int area(){
       return length*breath;
    };
    int perimeter(){
        return 2*(length*breath);
    }

};

int main(){
//**************************using object***********************
          // Rectangle r;
          // r.length= 10;
         // r.breath = 5;
         // cout<<r.area();

//***********************using pointer****************************

// Rectangle *p;
// p = new Rectangle;

Rectangle * p = new Rectangle();
p->length = 5;
p->breath = 20;
cout<<p->area();
}