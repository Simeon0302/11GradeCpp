#include <iostream>
#include <ctime>
#include <cstdlib>
#include <climits>
using namespace std;

int main() {
    int m, n, k, sum = 0, minN = INT_MAX, maxN = INT_MIN;
    cin >> m >> n >> k;
    int arr[m][n];
    srand(time(NULL));

    for(int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = rand() % 11;
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
    

    for (int i = 0; i < n; i++)
    {
        if(arr[k - 1][i] < minN) {
            minN = arr[k - 1][i];
        }

        if(arr[k - 1][i] > maxN) {
            maxN = arr[k - 1][i];
        }

        sum += arr[k - 1][i];
    }

    cout << "sum -> " << sum << endl;
    cout << "max -> " << maxN << endl;
    cout << "min -> " << minN << endl;
    cout << "--------------------" << endl;
    minN = INT_MAX;
    maxN = INT_MIN;

    for (int i = 0; i < m; i++)
    {
        if(arr[i][k - 1] < minN) {
            minN = arr[i][k - 1];
        }

        if(arr[i][k - 1] > maxN) {
            maxN = arr[i][k - 1];
        }
    }
    cout << "max -> " << maxN << endl;
    cout << "min -> " << minN << endl;
    cout << "--------------------" << endl;

    sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0 ;j < n; j++)
        {
            sum += arr[i][j];
        }   
    }

    cout << "sum -> " << sum;
}