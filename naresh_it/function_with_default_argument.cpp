#include<iostream>
using namespace std;

int sum(int x = 1, int y = 2 , int z=5 ){
    return x+y+z;
};

int main(){
    cout<<"sum ="<<sum(10,20,30);
    cout<<"sum ="<<sum(10,20);
    cout<<"sum ="<<sum(10);
}