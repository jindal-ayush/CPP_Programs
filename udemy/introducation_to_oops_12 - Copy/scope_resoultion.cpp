#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breath;

public:
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);

   void setLength(int l);
    void setBreath(int b);
    
    int getLength() { return length; }
    int getBreath() { return breath; }

 

    int area();
    int perimeter();

    bool isSquare();

    ~Rectangle();
};
int main()
{
    Rectangle r1(10, 10);
    cout << "area " << r1.area() << endl;
    if (r1.isSquare())
        cout << "yes" << endl;
    return 0;
};
Rectangle::Rectangle()
{
    length = 1;
    breath = 1;
}
Rectangle::Rectangle(int l ,int b)
{
    length = 1;
   breath = b;
}
Rectangle::Rectangle(Rectangle &r)
{
    length = r.length;
    breath = r.breath;
}
void Rectangle::setLength(int l)
{
    length = l;
}
void Rectangle::setBreath(int b)
{
    breath = b;
}
int Rectangle::area()
{
    return length * breath;
}
int Rectangle::perimeter()
{
    return 2 * (length + breath);
}
bool Rectangle::isSquare()
{
    return length == breath;
}
Rectangle::~Rectangle()
{
    cout << "rectangle destroyed0";
}