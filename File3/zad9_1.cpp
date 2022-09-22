#include <iostream>
#include <fstream>
using namespace std;

struct Student
{
    string name;
    int group;
    float ses;
};

int main() {
    Student stud1[2];

    for (int i = 0; i < 2; i++)
    {
        cin >> stud1[i].name >> stud1[i].group >> stud1[i].ses;
    }
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            if(stud1[j].group > stud1[j + 1].group) {
                swap(stud1[j], stud1[j + 1]);
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        cout << stud1[i].name << ' ';
    }
    

    fstream file;
    file.open("zad9_1.txt", ios::out);

    for (int i = 0; i < 2; i++)
    {
        if(stud1[i].ses > 4) file << stud1[i].name;
    }
    
}