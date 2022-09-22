#include <iostream>
using namespace std;

void findDel(int n) {
    int i = n;

    while(i > 0) {
        if(n % i == 0){
            cout << i << " ";
        }
        i--;
    }
}

int main() {
    int n;
    cin >> n;
    findDel(n);
}