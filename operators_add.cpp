#include <iostream>
#include <cstring>
#include <string>
using namespace std;
class triange
{
private:
    int width, height;

public:
    triange()
    {
        width = 0;
        height = 0;
    }
    triange(int a, int b)
    {
        width = a;
        height = b;
    }
    void get_paramters()
    {
        cout << "Enter the width: ";
        cin >> width;
        cout << "Enter the height: ";
        cin >> height;
    }
    // function to add two objects
    triange operator+(triange c2)
    {
        triange c3;
        c3.width = width + c2.width;
        c3.height = height + c2.height;
        return c3;
    }
    // function to subtract two objects
    triange operator-(triange c2)
    {
        triange c3;
        c3.width = width - c2.width;
        c3.height = height - c2.height;
        return c3;
    }
    // function to multiplicate two objects
    triange operator*(triange c2)
    {
        triange c3;
        c3.width = width * c2.width;
        c3.height = height * c2.height;
        return c3;
    }
    // function to divide two objects
    triange operator/(triange c2)
    {
        triange c3;
        c3.width = width / c2.width;
        c3.height = height / c2.height;
        return c3;
    }
    void show()
    {
        cout << "width = " << width << "  " << "height = " << height << endl;
    }
};
int main()
{
    triange c1, c2(2, 7), c3;
    c1.get_paramters();
    c3 = c1 + c2; // Add
    c3.show();
    c3 = c1 - c2; // subtract
    c3.show();
    c3 = c1 * c2; // multiplicate
    c3.show();
    c3 = c1 / c2; // divide
    c3.show();
}