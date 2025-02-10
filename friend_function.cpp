#include <iostream>
#include <cstring>
#include <string>
using namespace std;
// we will do that to skip the error of class Tri
class Tri;
class Rect
{
private:
    // if you want to define out of the class you can make it friend
    int weight, height;
    friend Rect doublicate(Rect T);
    friend int sum(Tri a, Rect b);

public:
    void set_parameters(int, int);
    int area()
    {
        return weight * height;
    }
};
class Tri
{
private:
    int weight, height;

public:
    Tri(int a, int b)
    {
        weight = a;
        height = b;
    }
    friend int sum(Tri a, Rect b);
};
Rect doublicate(Rect T)
{
    Rect A;
    A.weight = T.weight * 2;
    A.height = T.height * 2;
    return A;
}
void Rect::set_parameters(int a, int b)
{
    weight = a;
    height = b;
}
// this function we collect between two parameters from different classes
int sum(Tri a, Rect b)
{
    return a.weight + b.weight;
}
int main()
{
    Rect rectA, rectB;
    Tri o(3, 4);
    rectA.set_parameters(3, 4);
    cout << "The Area Before duplication = " << rectA.area() << endl;
    rectB = doublicate(rectA);
    cout << "The Area After duplication = " << rectB.area() << endl;
    cout << "The sum of Tri of weight and Rect of weight = " << sum(o, rectA) << endl;
}