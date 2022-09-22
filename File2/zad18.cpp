#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int ed, des, st;
    fstream file;
    file.open("zad18.txt", ios::out);

    for(int i = 100; i < 1000; i++) {
        ed = i % 10;
        des = (i / 10) % 10;
        st = i / 100;

        if(ed != des && ed != st && st != des) {
            file << i << " ";
        }
    }

    file.close();
}