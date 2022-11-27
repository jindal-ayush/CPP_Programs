#include<iostream>
using namespace std;

// void display(){
//     cout<<"hello";
// };
// float sum (int x, int y){
// int z;
// z = x+y;
// return z;
//}

int maximum(int a , int b , int c){
   if(a>b && a>c)
   return a;
   else if(b>c)
   return b;
   else return c;
};

int main(){
 // display();
 int a =100,  b= 500 , c =15, d;
d= maximum(a, b, c);
cout<<d<<endl;

   //c = a+b;
//    c=sum(a,b);
//    cout<<c;

}