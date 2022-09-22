#include <iostream>
using namespace std;

int main() {
    int m, n, d;
    cin >> m >> n >> d;
    int arr[m][n];

    for(int i = 0; i < m; i++) {
        cin >> arr[i][0];
    }

    for(int i = 0; i < m; i++) {
        for(int j = 1; j < n; j++) {
            arr[i][j] = arr[i][j - 1] + d;
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