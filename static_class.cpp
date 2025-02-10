// Here we will learn about static class member and static class function
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
class student
{
private:
    static int counter;
    char name[20];

public:
    static void Number_of_Object()
    {
        cout << "Number of Object ==> " << counter << endl;
    }
    student()
    {
        strcpy(name, "No name");
        // we need to increase the counter here
        counter++;
    }
};
// we need to define static variables out of the class
int student::counter = 0;
int main()
{
    cout << "the first two classes: \n";
    student ob1, ob2;
    student::Number_of_Object();
    cout
        << "the three object from array: \n";
    student ob3[3];
    // here you have two ways to define a static class
    // this is the normal one ob1.Number_of_Object()
    // the second one student::Number_of_Object()
    student::Number_of_Object();
}