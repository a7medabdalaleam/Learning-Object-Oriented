#include <iostream>
using namespace std;
/*
Exception handling
Exception has three parts
1) try where we try if user made mistake or not
2) throw where we throw that erro
3) catch where we catch the erro and handle it
*/
int main()
{
    int hour;
    cin.exceptions(cin.failbit); // we write that to tell we have expected erro from cin
    try
    {
        cin >> hour;
        if (hour < 0)
            throw "Error";
        else
            cout << "the hour is " << hour << ":00\n";
    }
    // we can't write any code here between try and catch
    catch (const char str[])
    {
        cerr << "Exception " << str << endl; // cerr is better cout in exception
    }
}