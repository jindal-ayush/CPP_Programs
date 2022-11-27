#include<iostream>
using namespace std;

class test {
   public:
  int a;

  protected:
  int b;
  private: 
  int c;
 friend void fun();
};

void fun()
{
    test t;
    t.a = 10;
    t.b= 15;
    t.c = 10;
}

int main(){
  
    return 0;
}