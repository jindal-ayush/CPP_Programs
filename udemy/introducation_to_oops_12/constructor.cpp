#include <iostream>
using namespace std;
class Retangle
{
private:
    int length;
    int breath;

public:
    void setLength(int L)
    {
        if (length <= 0)
        {
            length = L;
        }
        else
        {
            length = 1;
        }
    }
    void setBreath(int B)
    {
        if (breath <= 0)
        {
            breath = B;
        }
        else
        {
            breath = 1;
        }
    };
    int getLength()
    {
        return length;
    };
    int getBreath()
    {
        return breath;
    }
    int area()
    {
        return length * breath;
    }
    int perimeter(){
        return 2*(length  +breath);
    }
};

int main()
{
    Retangle r;
    r.setLength(-10);
    r.setBreath(5);

     cout<<r.area()<<endl;
    cout << "length is " << r.getLength();
    return 0;
};