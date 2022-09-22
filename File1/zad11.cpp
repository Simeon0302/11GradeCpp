#include <iostream>
using namespace std;

int main() {
    int m, n, k, sum = 0;
    cin >> m >> n >> k;
    int arr[m][n];

    for(int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        sum += arr[i][k - 1];
        cout << arr[i][k - 1] << " ";
    }

    cout << endl << sum;
    
}