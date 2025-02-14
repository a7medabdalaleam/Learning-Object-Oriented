#include <iostream>
using namespace std;
// there are three things the derived constructor inherit by default
// 1) constructor and destructor
// 2) operator = ()
// 3) friend
class mother
{
public:
    mother()
    {
        cout << "the Empty constructor of Mother " << endl;
    }
    mother(int a)
    {
        cout << "the parameteraize constructor of Mother ==> " << a << endl;
    }
};
class son : public mother
{
public:
    son(int b) : mother(b) // the son will inherit the parameteraize constructor
    {
        cout << "the parameteraize constructor of son ==> " << b << endl;
    }
};
class daughter : public mother
{
public:
    daughter(int a) // the daughter will inherit the empty constructor
    {
        cout << "the parameteraize constructor of daughter ==> " << a << endl;
    }
};
int main()
{
    son Ahmed(4);
    cout << "#####################################" << endl;
    daughter sara(1);
}