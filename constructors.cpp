#include <iostream>
#include <cstring>
using namespace std;
class triangle
{
private:
    float base;
    float height;

public:
    // what is constuctors
    //  1) it has the name of the class
    //  2) it doesn't return any thing
    //  3) it is called when the object is born
    // the first type of constructors is empty constructor
    triangle() // is has no parameters
    {
        cout << "The object is created" << endl;
        base = 0;
        height = 0;
    }
    // second type of constructors is parameteraize constructor
    // it's called when we put parameteraize to the consturctor
    triangle(float b, float h)
    // this is a parameteraize constructor
    {
        cout << "P contractor" << endl;
        base = b;
        height = h;
    }
    // the last one is copy constractor
    // it's called when we pass a object for anothor one
    triangle(const triangle &a) // this is a copy constructor it need (const and & )
    {
        base = a.base;
        height = a.height;
    }
    void set_base_height(float b, float h)
    {
        base = b;
        height = h;
    }
    float area()
    {
        return 0.5 * base * height;
    }
    void printall()
    {
        cout << "Base = " << base << "\n"
             << "Height = " << height << "\n"
             << "Area = " << area() << endl;
    }
};
int main()
{
    // every object just call one constuctor
    triangle ab1;
    triangle ab2(20, 10);
    triangle ab3(ab2);
    ab1.set_base_height(10, 5);
    cout << "the object call empty constructor" << endl;
    ab1.printall();
    cout << "the object call parameteraize constructor" << endl;
    ab2.printall();
    cout << "the object call copy constructor" << endl;
    ab3.printall();
}