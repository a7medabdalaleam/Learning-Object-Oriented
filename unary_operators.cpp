#include <iostream>
using namespace std;
class unary
{
private:
    int x, y;

public:
    unary(int a = 0, int b = 0)
    {
        x = a;
        y = b;
    }
    void show()
    {
        cout << "x = " << x << "   " << "y = " << y << endl;
    }
    // prefix operator
    unary operator++()
    {
        x++;
        y++;
        return *this;
    }
    // postfix operator
    unary operator++(int) // we put data type (int)  in the postfix operator as hint
    {
        unary t;
        t = *this; // we need to assign the object first
        x++;
        y++;
        return t; // we will return t
    }
    unary operator-()
    {
        x = -x;
        y = -y;
        return *this;
    }
    bool operator!()
    {
        return (x == 0 && y == 0);
    }
    unary operator+=(unary b2)
    {
        x += b2.x;
        y += b2.y;
        return *this;
    }
};
int main()
{
    unary b(2, 4), b1(3, 3);
    b++;
    cout << "After postfix == >" << endl;
    b.show();
    ++b;
    cout << "After prefix == >" << endl;
    b.show();
    b += b1;
    cout << "After add (+=) == >" << endl;
    b.show();
    -b;
    cout << "After (-) == >" << endl;
    b.show();
    if (!b)
        cout << "true = " << true << endl;
    else
        cout << "false = " << false << endl;
}