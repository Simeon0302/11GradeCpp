#include <iostream>
#include <cmath>
using namespace std;

struct Point
{
    int x, y;
};

double calculateLineLenght(Point point1, Point point2) {
    return sqrt(pow(point1.x + point2.x, 2) + pow(point1.y + point2.y, 2));
}

int main() {
    Point point1, point2, point3;
    double line1, line2, line3;
    
    cin >> point1.x >> point1.y >> point2.x >> point2.y >> point3.x >> point3.y;

    line1 = calculateLineLenght(point1, point2);
    line2 = calculateLineLenght(point1, point3);
    line3 = calculateLineLenght(point2, point3);

    if(line1 + line2 < line3 || line2 + line3 < line1 || line1 + line3 < line2) {
        cout << "On one line";
    }
    else {
        cout << "Not on one line";
    }
}