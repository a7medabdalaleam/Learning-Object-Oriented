#include <iostream>
using namespace std;
class cexcepation
{
public:
    int arr[100];
    cexcepation()
    {
        for (size_t i = 0; i < 100; i++)
        {
            arr[i] = i;
        }
    }
    int get_exception(int x)
    {
        if (x >= 100)
            throw xbig();
        else if (x < 0)
            throw xsmall();
        else
            return arr[x];
    }
    class xbig
    {
    public:
        xbig() {}
        void print_big()
        {
            cout << "big\n";
        }
    };
    class xsmall
    {
    public:
        xsmall() {}
        void print_small()
        {
            cout << "small\n";
        }
    };
};
int main()
{
    int i;
    cexcepation a;
    try
    {
        cout << "Enter the number";
        cin >> i;
        cout << "the element is " << a.get_exception(i) << endl;
    }
    catch (cexcepation::xbig b)
    {
        b.print_big();
    }
    catch (cexcepation::xsmall s)
    {
        s.print_small();
    }
    return 0;
}