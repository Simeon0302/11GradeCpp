#include <iostream>
#include <fstream>
using namespace std;

struct Student
{
    int number;
    string name;
    float ocenka;
};

int main()
{
    fstream file;
    file.open("zad7_1.txt", ios::out);
    Student students[10];
    float sumGrade, numStu = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> students[i].number >> students[i].name >> students[i].ocenka;
    }

    for (int i = 0; i < 10; i++)
    {
        if (students[i].ocenka == 6) {
            cout << students[i].name << endl;
            file << students[i].name << endl;
        }
        else if (students[i].ocenka >= 3 && students[i].ocenka <= 4.5) {
            numStu++;
        }
        sumGrade += students[i].ocenka;
    }

    cout << "Sreden uspeh -> " << (float)(sumGrade / 10) << endl;
    cout << "Broj uchenichi v intervala -> " << numStu << endl;
    
    file << "Sreden uspeh -> " << (float)(sumGrade / 10) << endl;
    file << "Broj uchenichi v intervala -> " << numStu << endl;

    file.close();
}