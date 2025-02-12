#include <iostream>
using namespace std;
class sthis
{
public:
    void adress()
    {
        cout << this;
    }
};
// Another way to use this
class student
{
private:
    int id;

public:
    void get_id(int id)
    {
        this->id = id;
    }
    int re_id()
    {
        return id;
    }
};
int main()
{
    // this is a pointer refers to the object which called the function
    //  this brings the object which called that function
    sthis a, b, c;
    cout << "the adress: ";
    a.adress();
    cout << endl;
    cout << "the adress: ";
    b.adress();
    cout << endl;
    cout << "the adress: ";
    c.adress();
    cout << endl;
    student ahmed;
    ahmed.get_id(10304);
    cout << "the id is " << ahmed.re_id() << endl;
}