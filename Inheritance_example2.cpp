#include <iostream>
using namespace std;
class base
{
private:
    int i;

protected:
    int j;

public:
    int x, y;
    void value(int a)
    {
        j = a;
    }
};
class derived : private base
// it will return the pubilc and protectd member into private member just in that class
{
private:
    int w;

public:
    base::j; // we can make it public
    base::x; // we can make it public
    base::y; // we can make it public
    // base::i; //we can't make it public because it's private in the base class
    void show()
    {
        cout << "j =" << j << "  x= " << x << "   y= " << y << endl;
    }
};
int main()
{
    derived A;
    A.j = 15;
    A.y = 34;
    A.x = 22;
    A.show();
}