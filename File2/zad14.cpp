#include <iostream>
using namespace std;

int main()
{
    int m, n, d;
    cin >> m >> n >> d;
    int arr[m][n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[0][i];
    }

    for (int i = 1; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = arr[i - 1][j] * d;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}