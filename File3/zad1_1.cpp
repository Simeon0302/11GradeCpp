#include <iostream>
using namespace std;

void func() {
    int ed, des, st, hil, num1, num2;

    for (int num = 1000; num <= 9000; num++)
    {
        ed = num % 10;
        des = (num / 10) % 10;
        st = (num / 100 % 10);
        hil = num / 1000;

        num1 = hil * 10 + st;
        num2 = des * 10 + ed;

        if ((num1 - num2) == (ed + des + st + hil))
        {
            cout << num << " ";
        }
    }
}

int main() {
    func();
}