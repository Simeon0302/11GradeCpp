#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int arr[6][5];

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }

    int arr2[6 * 5], index = 0;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr2[index] = arr[i][j];
            index++;
        }   
    }

    // cout << endl;

    // for (int i = 0; i < 6 * 5; i++)
    // {
    //     cout << arr2[i] << " ";
    // }
}