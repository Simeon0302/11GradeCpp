#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int ed, des, st, m;
    fstream file;
    file.open("zad19.txt", ios::out);

    for (int i = 100; i < 1000; i++)
    {
        ed = i % 10;
        des = (i / 10) % 10;
        st = i / 100;
        
        m = ed * des * st;

        if(m != 0) {
            if (i % (ed * des * st) == 0)
            {
                file << i << " ";
            }
        }
    }

    file.close();
    file.open("zad19.txt", ios::in);

    int num;
    while (file >> num)
    {
        cout << num << " ";
    }

    file.close();   
}