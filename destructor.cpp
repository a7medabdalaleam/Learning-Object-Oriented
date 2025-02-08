#include <iostream>
#include <cstring>
using namespace std;
// simple explanation of the destructor
class Rectangle
{
private:
    int W, H; //w is the weight / H is the height 

public:
    Rectangle() : W(0), H(0) // another way for initialization
    {
        cout << "W = " << W << " " << "H = " << H << endl;
    }
    Rectangle(int a, int b) : W(a), H(b)
    {
        cout << "the new object has been created" << endl;
        Rectangle ob;
    }
    // we create a destructor
    // it has the same name of the class and (~)
    // it doesn't take parameters and return a value even void
    // we just have one destructor in the class
    // it deletes the object from the momery
    // it destroy the object from down until up
    // we call at the end of the closed of the right braces
    ~Rectangle()
    {
        cout << "w = " << W << " " << "H = " << H << "the object has been deleted \n";
    }
};
class phone
{
private:
    char name[20];
    char model[20];
    int price;

public:
    phone() {}
    phone(char n[], char m[], int p)
    {
        strcpy(name, n);
        strcpy(model, m);
        price = p;
    }
    // how to define the function out of the class
    void print();
    // how to define the destructor out of the class
    ~phone();
};
// put (class's name befor the function's name ) and (::)
void phone::print()
{
    cout << "name = " << name << endl
         << "Model = " << model << endl
         << "price = " << price << endl;
}
// put (class's name befor the destructor's name ) and (::)
phone::~phone()
{
    cout << "the object was destroyed " << endl;
}
int main()
{
    phone ob("iphone", "Mete", 20000);
    ob.print();
}