#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void printFile(string path)
{
    fstream MyFile;
    MyFile.open(path, ios::in);

    if (MyFile.is_open())
    {
        string Line;

        while (getline(MyFile, Line))
        {
            cout << Line << endl;
        }
        MyFile.close();
    }
}

int main()
{
    fstream MyFile;

    MyFile.open("MyFile.txt", ios::out | ios::app);
    if (MyFile.is_open())
    {
        MyFile << "Hassan \n";
        MyFile << "Ali \n";
        MyFile << "Mohamed \n\n\n"; 

        MyFile << "Hi, this is the first line \n";
        MyFile << "Hi, this is the second line \n";
        MyFile << "Hi, this is the third line \n\n\n";
        MyFile.close();
    }

    printFile("MyFile.txt");
        return 0;
}
