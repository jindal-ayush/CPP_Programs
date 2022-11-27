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
        if (L < 0)
        {
            length = 1;
        }
        else
        {
            length = L;
        }
    }
    void setBreath(int B)
    {
        if (B < 0)
        {
            breath = 1;
        }
        else
        {
            breath = B;
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
    r.setLength(10);
    r.setBreath(1);

     cout<<r.area()<<endl;
    cout << "length is " << r.getLength()<<endl;
     cout << "breath is " << r.getBreath()<<endl;
    return 0;
};

// #include <iostream>
// using namespace std;

// class ayush{
// public:
//     int x;
//     int y;

//     int addition()
//     {
//         return x * y;
//     };
// };

// int main()
// {
//     ayush myObj;
//     myObj.x = 25;
//     myObj.y = 2;

//     cout<<myObj.addition();
//     return 0;
// };