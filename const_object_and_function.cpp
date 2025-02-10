#include <iostream>
#include <cstring>
#include <string>
using namespace std;
class Time
{
private:
    int h, m, s; // h-> hour ,m-> minute , s-> second
public:
    void print_time() const
    {
        cout << h << ":" << m << ":" << s << endl;
    }
    Time(int i, int j, int k)
    {
        h = i;
        m = j;
        s = k;
    }
};
int main()
{
    // in the constant object you can just call constant functio
    const Time ob(12, 0, 0);
    ob.print_time();
    // the normal object can call every thing in the class
    Time ob1(5, 0, 0);
    ob1.print_time();
}