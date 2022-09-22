#include <iostream>
using namespace std;

void sum(int a, int b, int c) {
    cout << a + b + c;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    sum(a, b, c);
}