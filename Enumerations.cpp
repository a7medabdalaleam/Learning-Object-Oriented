#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;
string day[7] = {"Sat", "Sun", "Mon", "Tues", "Wed", "Thur", "Fri"};
/*
Enumeration -> enum (name of the numeration) {Element1 ,Element2, ... }
when we print the enumeration we print int number
the first number in the enumeration starts with zero
the Elements inside the Enumeration are Equal and the user can't implement any number in it
*/
enum days
{
    sat = 1, // to tell the enumeration to start form one
    sun,
    mon,
    tues,
    wed,
    thur,
    fri
};
class week
{
    days d[7];

public:
    void set(days w[])
    {
        for (size_t i = 0; i < 7; i++)
        {
            d[i] = w[i];
        }
    }
    void print()
    {
        for (size_t i = 0; i < 7; i++)
        {
            cout << "the number of the day " << day[i] << " is ==> " << d[i] << endl;
        }
    }
};
int main()
{
    // we define enumeration as array
    days m[7] = {sat, sun, mon, tues, wed, thur, fri};
    week g;
    g.set(m);
    g.print();
}