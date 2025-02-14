#include <iostream>
using namespace std;
// how to make abstract class by using pure virtual function
/*
In Abstract class
there is a pure virtual function
I can just define pointer from it not objects
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
    virtual int area() = 0;
    void showprint()
    {
        cout << this->area() << endl;
        // this->area() will be prect->area();
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
    Cploy *p[2] = {&rect, &tri};
    p[0]->set_w_h(10, 20);
    p[1]->set_w_h(10, 20);
    for (size_t i = 0; i < 2; i++)
    {
        p[i]->area(); // late binding ==> i know late when the pointer associate with
        p[i]->showprint();
    }
}