#include <iostream>
using namespace std;
// here i have lots of classes every one is called based on its datatype
template <class t>
class A_char
{
public:
    A_char(t x)
    {
        cout << x << " is not char : " << endl;
    }
};
// Template spacialization
// creating a class to deal with special data type
template <>
class A_char<char>
{
public:
    A_char(char x)
    {
        cout << x << " is a char " << endl;
    }
};
int main()
{
    A_char<int> ob1(23);
    A_char<double> ob2(23.54);
    A_char<char> ob3('A');
}