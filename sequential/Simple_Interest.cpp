#include <iostream>
using namespace std;

int main()
{
    int principal;
    cout<<"principal"<<endl;
    cin>>principal;

    float rate;
    cout<<"rate"<<endl;
    cin>>rate;

    int  time;
    cout<<"time"<<endl;
    cin>>time;

    float simple_interest;
    simple_interest = (principal*rate*time)/100;
    cout<<"simple interest: "<<simple_interest;  

    return 0;
}