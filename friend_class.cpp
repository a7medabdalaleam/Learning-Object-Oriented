#include <iostream>
using namespace std;
class sqaure;
class Rect
{
private:
    int weight, height;

public:
    int area()
    {
        return weight * height;
    }
    void convert(sqaure a);
};
class sqaure
{
private:
    int side;

public:
    sqaure(int x)
    {
        side = x;
    }
    friend class Rect;
};
void Rect::convert(sqaure a)
{
    weight = a.side;
    height = a.side;
}
int main()
{
    Rect ob;
    sqaure ob1(5);
    ob.convert(ob1);
    cout << "the Area of Rect class = " << ob.area() << endl;
}