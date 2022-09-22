#include <iostream>
using namespace std;

int sum_digit(int n) {
    int sum = 0;

    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    (sum_digit(a) + sum_digit(b)) == (sum_digit(c) + sum_digit(d)) ? cout << "Yes" : cout << "No";
}