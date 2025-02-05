#include <iostream>
#include <string>
#include <cstring>
using namespace std;
// struct
// we use struct to create data different types
// we access every item by its name
// we can't compare struct with another one
// we can compare item with item
struct car
{
    string name;
    string color;
    int maxspeed;
    int model;
};
// declear a object form the struct
struct car1
{
    string name;
    string color;
    int maxspeed;
    int model;
} y; // you created object from the struct
struct d
{
    int feed;
    int inche;
};
// distance sum(distance x, distance y)
// {
//     distance z;
//     z.feed = x.feed + y.feed;
//     z.inche = x.inche + y.inche;
//     return z;
// }
d sum(d x, d y)
{
    d z;
    z.feed = x.feed + y.feed;
    z.inche = x.inche + y.inche;
    return z;
}
// pass struct to class
struct exam
{
    int first;
    int second;
    int last;
};
class Subject
{
private:
    char name[20];
    exam Exam;

public:
    Subject()
    {
        strcpy(name, "no name");
        Exam = {0, 0, 0};
    }
    Subject(char n[], int sa, int s, int sl)
    {
        strcpy(name, n);
        Exam = {sa, s, sl};
    }
    int totol()
    {
        return Exam.first + Exam.second + Exam.last;
    }
    void pr()
    {
        cout << "Name= " << name << endl
             << "first= " << Exam.first << endl
             << "second = " << Exam.second << endl
             << "last = " << Exam.last << endl
             << "Total = " << totol() << endl;
    }
};
int main()
{
    d x, y, z;
    cout << "Enter x.feed and y.feed = ";
    cin >> x.feed >> y.feed;
    cout << "Enter x.inche and y.inche = ";
    cin >> x.inche >> y.inche;
    z = sum(x, y);
    cout << "z.feed = " << z.feed << endl
         << "z.inche = " << z.inche << endl;
    Subject A("Math", 23, 45, 32);
    A.pr();
}