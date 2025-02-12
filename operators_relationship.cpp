#include <iostream>
using namespace std;
class Relation
{
private:
    int x, y, z;

public:
    Relation(int i, int j, int k)
    {
        x = i;
        y = j;
        z = k;
    }
    int operator==(Relation b)
    {
        return (x == b.x && y == b.y && z == b.z); // this is abbreviation for this
        /*
         if (x == b.x && y == b.y && z == b.z)
         {
         return 1;}
         else
         return 0;
         */
    }
    int operator>=(Relation b)
    {
        return (x >= b.x && y >= b.y && z >= b.z); // this is abbreviation for this
        /*
         if (x >= b.x && y >= b.y && z >= b.z)
         {
         return 1;}
         else
         return 0;
         */
    }
    int operator!=(Relation b)
    {
        return (x != b.x && y != b.y && z != b.z); // this is abbreviation for this
        /*
         if (x != b.x && y != b.y && z != b.z)
         {
         return 1;}
         else
         return 0;
         */
    }
};
int main()
{
    Relation b(10, 10, 10), b1(10, 10, 0);
    if (b == b1)
        cout << "Object 1 is equal Object 2" << endl;
    else
        cout << "Object 1 is not equla Object 2" << endl;
}