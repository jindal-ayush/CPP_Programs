#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter number"<<endl;
    cin>>num;

    int a = num % 10;     // 3648%10   a= 8, num = 3648
    num = num/10;       // num=364

    int b = num % 10; // b=4, num =364
    
    num = num / 10;  // num 36

    int c = num %10;      // c =6, num =36

    num = num / 10; // num 3

    int d = num % 10; //d =3

    int reverse = a*1000+b*100+c*10+d;
    cout<<"reverse "<<reverse;


    

    return 0;}