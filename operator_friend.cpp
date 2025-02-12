#include <iostream>
using namespace std;
class binary
{
private:
    int x, y;

public:
    binary()
    {
        x = 0;
        y = 0;
    }
    binary(int i, int j)
    {
        x = i;
        y = j;
    }
    void show()
    {
        cout << "x= " << x << "   " << "y= " << y << endl;
    }
    binary operator+(binary c2)
    {
        binary c3;
        c3.x = x + c2.x;
        c3.y = y + c2.y;
        return c3;
    }
    binary operator+(int n)
    {
        binary c3;
        c3.x = x + n;
        c3.y = y + n;
        return c3;
    }
    friend binary operator+(int n, binary c1);
};
binary operator+(int n, binary c1)
{
    binary c3;
    c3.x = n + c1.x;
    c3.y = n + c1.y;
    return c3;
}
int main()
{
    binary c1(1, 2), c2(5, 4), c3;
    c3 = c1 + c2; // c3=c1.operator+(c2)
    c3.show();
    c3 = c1 + 10; // c3 = c1.operator+(int n)
    c3.show();
    c3 = 10 + c1; // c3=operator+(int n ,binary c1)
    c3.show();
}