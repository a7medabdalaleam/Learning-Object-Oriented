#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int index;
    cout << "Enter the index: ";
    cin >> index;
    try
    {
        if (index >= 10)
            throw "Erro out of range\n";
        if (index < 0)
            throw index;
        for (size_t i = 0; i <= index; i++)
        {
            cout << "the index[" << i << "] = " << arr[i] << endl;
        }
    }
    catch (const int n)
    {
        cerr << "Error negative " << n << endl;
    }
    catch (const char str[])
    {
        cerr << "Exception " << str << endl;
    }
}