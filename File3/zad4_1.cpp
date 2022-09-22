#include <iostream>
using namespace std;

struct List
{
    int field[10];
    int field2[10];
    int field3[10];
};


int main() {
    int n;
    cin >> n;

    srand(time(NULL));
    
    List list;

    for (int i = 0; i < n; i++)
    {
        list.field[i] = 1 + rand() % (20 - 1 + 1);
        list.field2[i] = list.field[i] * 2;
        list.field3[i] = list.field[i] * list.field[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << list.field[i] << " ";
    }

    cout << endl << "----------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << list.field2[i] << " ";
    }

    cout << endl << "----------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << list.field3[i] << " ";
    }
}