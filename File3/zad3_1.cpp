#include <iostream>
using namespace std;

bool is_simple (int x) {
    int count = 0;

    for (int i = 1; i <= x; i++)
    {
        if(x % i == 0) {
            count++;
        }
    }

    return count == 2;
}

int main() {
    int n, NumberOfPrimeNumbers = 0, num;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if(is_simple(num)) {
            NumberOfPrimeNumbers++;
        }
        cout << "Number of prime numbers: " << NumberOfPrimeNumbers << endl;
    }
    
}