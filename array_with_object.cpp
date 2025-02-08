#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class student
{
private:
    char name[20];
    int id;

public:
    student()
    {
        cout << "Empty Constructor " << endl;
        strcpy(name, "No name");
        id = 0;
    }
    student(char n[], int i)
    {
        cout << "Parametraize constructor" << endl;
        strcpy(name, n);
        id = i;
    }
    void pr()
    {
        cout << "name =" << name << endl
             << "Id = " << id << endl;
    }
};
int main()
{
    student s1, s2;
    student s3("Ahmed", 352151214);
    student arr[3] = {student("Mohamed", 442545), student("sami", 54345), student("Mostafa", 43454)};
    for (size_t i = 0; i < 3; i++)
    {
        arr[i].pr();
    }
    for (size_t i = 0; i < 20; i++)
    {
        cout << "#" << " ";
    }
    cout << endl;
    s1.pr();
    s2.pr();
    s3.pr();
}