#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char symbol;
    int n;
    cin >> n;
    fstream file;
    file.open("zad17.txt", ios::out);

    for (int i = 0; i < n; i++)
    {
        cin >> symbol;
        file << symbol << " ";
    }

    file.close();
}