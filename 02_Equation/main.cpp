#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    if (a == 0 && b == 0) {
        return 0;
    }

    if (a == 0) {
        double x = -c / b;
        cout << x;
        return 0;
    }

    double d = b * b - 4 * a * c;
    if (d == 0) {
        double x = -b / (2 * a);
        cout << x;
        return 0;
    }
    if (d > 0) {
        double x1 = (-b + sqrt(d)) / (2 * a);
        double x2 = (-b - sqrt(d)) / (2 * a);
        cout << x1 << " " << x2;
        return 0;
    }

    return 0;
}