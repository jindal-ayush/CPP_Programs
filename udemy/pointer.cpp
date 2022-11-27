#include<iostream>
using namespace std;


class Rectangle{
    private:
    int length;
    int breath;
    public:
    Rectangle(int length, int breath)
    {
        this->length=  length;
        this->breath = breath;
    }
    int area(){
        return length*breath;
    }

};

int main(){

    Rectangle r1(10,5);
return 0;
};

