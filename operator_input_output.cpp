#include <iostream>
using namespace std;
class Distance
{
private:
    int feed, iches;

public:
    // Distance(int a, int b)
    // {
    //     feed = a;
    //     iches = b;
    // }
    void show()
    {
        cout << "f = " << feed << "   " << "i = " << iches << endl;
    }
    friend istream &operator>>(istream &input, Distance &d1)
    {
        input >> d1.feed >> d1.iches;
        return input;
    }
    friend ostream &operator<<(ostream &output, Distance &d1)
    {
        output << "f = " << d1.feed << "   I = " << d1.iches << endl;
        return output;
    }
};
int main()
{
    Distance d1, d2;
    cin >> d1;
    cout << d1;
}