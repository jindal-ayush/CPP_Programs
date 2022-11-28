// #include<iostream>
// using namespace std;

// class test{
//    public:
//   static  int a;
// };
// int main()
// {
// test ::a= 100;
// cout<<test::a<<endl;
// return 0;
// }

#include<iostream>
using namespace std;
class  test{
  public:
  static int a;
  // void get(){
  //   cout<<"a="<<a<<endl;
  // };
};
 int test :: a;


 int main(){
  // test t;
  // t.get();
  test::a = 10;
  cout<<"a"<<test::a<<endl;
 }