#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(NULL));

    int n, count = 0;
    char symbol;
    cin >> n >> symbol;
    char arr[n];

    for(int i = 0; i < n; i++) {
        arr[i] = (char)(97 + rand() % (122 - 97 + 1));
        cout << arr[i];
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] == symbol) {
            count++;
        }
    }

    cout << endl << count;
}
