#include <iostream>
using namespace std;
template <class T>
class number
{
private:
    T x, y;

public:
    number(T a, T b)
    {
        x = a;
        y = b;
    }
    T max();
};
// we need to write the name of the template above the funtion
template <class T>
T number<T>::max()
{
    return (x > y ? x : y);
}
int main()
{
    // we need to write the data type int to tell the template which data it will take
    number<int> ob(10, 25);
    cout << "The max number: " << ob.max();
}