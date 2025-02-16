/*
we have a story
we have the class (ios)
ios has three children (ostream , istream , fstreampas)
(ostream , istream , fstreampas) inherate the attributes to (iostream)
#####################
ostream inherate ofstream
istream inherate ifstream
*/
#include <iostream>
#include <fstream> // we need (fstream) when we deal with files
using namespace std;
int main()
{
    // this is the first file
    // ofstream file;
    // file.open("Ahmed.txt");
    // file << "Ahmed is a programmer ";
    // file.close();
    // #################################################
    // this is the second file
    // ofstream file2;
    // file2.open("file2.txt");
    // cout << "Enter name and id\n";
    // cout << "Enter ctrl z to stop" << endl;
    // char name[20];
    // int id;
    // while (cin >> name >> id)
    // {
    //     file2 << name << "  " << id << endl;
    // }
    // ##################################################
    // how to write in file
    int arr[20];
    int j = 0;
    for (size_t i = 0; i < 20; i++)
    {
        j = arr[i] * 10;
        arr[i] = j;
    }
    ofstream file3;
    file3.open("file3.txt", ios::binary); // ios::binary means strore everything like itself
    // file3.write(reinterpret_cast<char*>(arr), 10 * sizeof(int));
    file3.write((char *)&arr, sizeof arr);
    // reinterpret_cast<char*>(arr) ==> we turn the array into array of character
    // 10*sizeof(int) ==> return the size of array
    file3.close();
    ifstream file4; // I created object from ifstream to show data
    file4.open("file4.txt", ios::binary);
    file4.read((char *)&arr, 10 * sizeof(int));
}