#include <iostream>
using namespace std;
// what is inheritance
/*
inheritance is useful with reyouzabilate
it inherate protected member to the derived class
it inherate the public member to the derived class
base class --> is the father
derived class --> is the son
member private --> can access from the same class only
member protected --> can access from the base class and the derived class
member public --> can access from any where
*/
class Poly /// this is the base class
{
protected:
    int width, height;

public:
    void get_value(int w, int h)
    {
        width = w;
        height = h;
    }
};
class Rect : public Poly // this is the derived class
// the type of inheritance is public
{
public:
    int area()
    {
        return width * height;
    }
};
class Triangle : public Poly // this is the derived class
// the type of inheritance is public
{
public:
    int area()
    {
        return (width * height) / 2;
    }
};
int main()
{

    Rect ob;
    Triangle ob1;
    ob.get_value(10, 5);
    cout << "The area of the Rect => " << ob.area() << endl;
    ob1.get_value(10, 5);
    cout << "The area of the Triangle => " << ob1.area() << endl;
}