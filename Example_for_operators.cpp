#include <iostream>
using namespace std;
class Array
{
private:
    int arr[3];

public:
    Array()
    {
        for (size_t i = 0; i < 3; i++)
        {
            arr[i] = i + 2;
        }
    }
    int &operator[](int in)
    {
        return arr[in];
    }
};
int main()
{
    Array ob;
    cout << ob[2] << endl;
}