#include <iostream>
using namespace std;
// how ploymerphism works
/*
we make a pointer to point the function in sons
*/
class Cploy
{
protected:
    int w, h;

public:
    void set_w_h(int a, int b)
    {
        w = a;
        h = b;
    }
    virtual int area()
    // we use virtual to tell the compiler the area function is a main part of the Cploy class
    {
        return (0);
    }
};
class Triangle : public Cploy
{
public:
    int area()
    {
        return (w * h) / 2;
    }
};
class Rectangle : public Cploy
{
public:
    int area()
    {
        return w * h;
    }
};
int main()
{
    Rectangle rect;
    Triangle tri;
    Cploy *prect, *ptri;
    prect = &rect; // early binding ==> i know directly  when the pointer associate with
    ptri = &tri;
    prect->set_w_h(10, 20);
    ptri->set_w_h(10, 20);
    cout << "the area of the Rectangle = " << prect->area() << endl;
    cout << "the area of the Triangle = " << ptri->area() << endl;
}