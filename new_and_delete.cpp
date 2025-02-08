#include <iostream>
using namespace std;
// new and delete
// why do we use new and delete
// we use new to ask the compiler to prepare a storage for a poiter
// after assignint the pointer in that address
// Than i can delete the address ==> return the address to the compiler
/*
int *p;
p=new int ;
*p=10 (you can put any value)
delete p;
*/
// Here is Example using class
class Rect
{
private:
    int *weight, *height;

public:
    Rect(int, int);
    ~Rect();
    int area()
    {
        return (*weight * *height);
    }
};
Rect::Rect(int a, int b)
{
    weight = new int;
    height = new int;
    *weight = a;
    *height = b;
}
Rect::~Rect()
{
    delete weight;
    delete height;
}
int main()
{
    Rect ob(4, 10);
    cout << ob.area() << endl;
}