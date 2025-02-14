#include <iostream>
#include <string>
#include <cstring>
// Example for Multiple Inheritance
using namespace std;
class Name
{
private:
    char name[20];

protected:
    void set_name(char n[])
    {
        strcpy(name, n);
    }
    void print_name()
    {
        cout << "your name is " << name << endl;
    }
};
class Id
{
private:
    int id;

protected:
    void set_id(int i)
    {
        id = i;
    }
    void print_id()
    {
        cout << "your id is " << id << endl;
    }
};
class student : public Name, public Id
{
public:
    student(char name[], int id)
    {
        set_name(name);
        set_id(id);
    }
    void print()
    {
        print_name();
        print_id();
    }
};
int main()
{
    student A("Ahmed", 44545);
    A.print();
}