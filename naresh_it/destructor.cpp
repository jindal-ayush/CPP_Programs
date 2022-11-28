#include<iostream>
using namespace std;
 
class sample{
private:
   int a , b;
   public:
   sample(){
     a = 10;
     b= 20;
   };
   ~sample(){
    cout<<"a= "<<a<<endl;
    cout<<"b = "<<b<<endl;
   }
};
int main(){
    sample s;
      
}