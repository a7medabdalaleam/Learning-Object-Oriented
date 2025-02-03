#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
// This is the first project in OOP
class car
{
    // In private scope you can put Object's attributes
private:
    char name[20];  // Name Attribute
    char color[20]; // Color Attribute
    int maxspeed;   // Maxspeed Attribute
    int model;      // Model Attribute
    // In public scope you can put funcions
public:
    // Funcions to Set Values
    void setName(char n[])
    {
        strcpy(name, n);
    }
    void setcolor(char c[])
    {
        strcpy(color, c);
    }
    void setMaxspeed(int s)
    {
        maxspeed = s;
    }
    void setModel(int m)
    {
        model = m;
    }
    // Funcions to Get Values
    char *getName() // I put * to return array of character
    {
        return name;
    }
    char *getColor()
    {
        return color;
    }
    int getMaxspeed()
    {
        return maxspeed;
    }
    int getModel()
    {
        return model;
    }
    // This funcion print all attribute of object
    void print()
    {
        cout << "Name = " << name << "\n"
             << "Color = " << color << "\n"
             << "Maxspeed = " << maxspeed << "\n"
             << "Model = " << model << "\n";
    }
};
int main()
{
    // I created object from class "car"
    car x;
    // you can just use Member funcion just from the Object
    x.setName("Kia");
    x.setcolor("Red");
    x.setMaxspeed(300);
    x.setModel(2016);
    x.print();
}