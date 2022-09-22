#include <iostream>
using namespace std;

double stepen(double x, int n) {
    double res = 1;

    if(n > 0) {
        for(int i = 0; i < n; i++ ) {
            res = res * x;
        }
    }
    if(n < 0) {
        for (int i = n; i < 0; i++)
        {
            res = res / x;
        }
    }
    if(n == 0) {
        res = 1;
    }

    return res;
}

int main() {
    int x, n;
    cin >> x >> n;

    cout << stepen(x, n);
}