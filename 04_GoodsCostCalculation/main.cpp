#include <iostream>
using namespace std;

int main() {
    double n, a, b, x, y;
    cin >> n >> a >> b >> x >> y;
    if (n > b) {
        cout << n * (1 - y / 100);
        return 0;
    }
    if (n > a) {
        cout << n * (1 - x / 100);
        return 0;
    }
    cout << n;
    return 0;
}