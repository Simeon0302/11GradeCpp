#include <iostream>
#include <ctime>
#include <cstdlib>
#include <climits>
using namespace std;

int main() {
    srand(time(NULL));
    int n, minN = INT_MAX, b;
    cin >> n >> b;
    int arr[n];

    for(int i = 0; i < n; i++) {
        arr[i] = rand();
        cout << arr[i] << " ";
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] < minN && arr[i] > b) {
            minN = arr[i];
        }
    }

    cout << endl;
    cout << minN << endl;

    for(int i = 0; i < n; i++) {
        if(arr[i] == minN){
            cout << i + 1 << " ";
        }
    }
}
