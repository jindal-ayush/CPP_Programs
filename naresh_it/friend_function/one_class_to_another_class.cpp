#include<iostream>
using namespace std;

class author{
   char aname[20];
   friend class book;
};
class book{
char bname[20];
float price;
public:
author a;
void getdata(){
    cout<<"enter a name"<<endl;
    cin>>a.aname;
    cout<<"enter book name"<<endl;
    cin>>bname;
    cout<<"enter price"<<endl;
    cin>>price;
}

void putdata()
{
    cout<<"author name = "<<a.aname<<endl;
     cout<<"book name = "<<bname<<endl;
      cout<<"price = "<<price<<endl;

}
};
int main(){
    book b;
    b.getdata();
    b.putdata();
}