#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int n, k, l, sum = 0;
    cin >> n >> k >> l;
    int arr[n];

    for(int i = 0; i < n; i++ ){
        arr[i] = rand();
        cout << arr[i] << " ";
    }

    for(int i = 0; i < n; i++ ) {
        if(i < k || i > l) {
            sum += arr[i];
        }
    }

    cout << endl << sum;
}
