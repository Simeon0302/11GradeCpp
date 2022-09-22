#include <iostream>
#include <ctime>
#include <cstdlib>
#include <climits>
using namespace std;

int main() {
    srand(time(NULL));
    int n, maxN = INT_MIN;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        arr[i] = rand();
        cout << arr[i] << " ";
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] > maxN) {
            maxN = arr[i];
        }
    }

    cout << endl;
    cout << maxN << endl;

    for(int i = 0; i < n; i++) {
        if(arr[i] == maxN){
            cout << i + 1 << " ";
        }
    }

}
