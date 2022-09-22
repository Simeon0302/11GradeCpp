#include <iostream>
using namespace std;

bool checkForEqualDigits(int n) {
    return n / 100 == (n / 10) % 10 && (n / 10) % 10 == n % 10 && n % 10 == n / 100;
}

int main() {
    int n;
    cin >> n;
    checkForEqualDigits(n) ? cout << "Yes" : cout << "No";
}