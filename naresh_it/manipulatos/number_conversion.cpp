 #include<iostream>
#include<iomanip>
using namespace std;

int main(){
    cout<<setbase(16)<<65<<endl;
      cout<<setbase(10)<<010165<<endl;
       cout<<setbase(10)<<0x41<<endl;
       cout<<setiosflags(ios::oct)<<65;

      cout<<setiosflags(ios::showpos)<<100;
}