#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int n, index;
    bool isTrue = true;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        arr[i] = rand();
        cout << arr[i] << " ";
    }

    for(int i = 0; i < n - 1; i++) {
        if(arr[i] % 2 == arr[i + 1] % 2) {
            isTrue = false;
            index = i + 1;
            break;
        }
    }

    cout << endl;

    isTrue ? cout << 0 : cout << index;
}
