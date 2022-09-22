#include <iostream>
using namespace std;

int square(int a, int b) {
    cout << a * a << " " << b * b;
}

int main() {
    int a, b;
    cin >> a >> b;
    square(a, b);
}
