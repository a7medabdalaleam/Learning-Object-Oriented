#include <iostream>
using namespace std;
// template
template <class first>
first sum(first x, first y) // the compiler will consider first as datatype(int)
{
    return x + y;
}
// Templates with Multiple Parameters
template <class f, class s>
s smaller(f x, s y)
{
    return (x < y ? x : y);
}
int main()
{
    int x = 10, y = 20;
    double f = 10.3;
    // cout << sum(x, f) << endl; // Error because the x and f have different data type
    cout << "the smaller number is " << smaller<double, int>(f, x) << endl;
}