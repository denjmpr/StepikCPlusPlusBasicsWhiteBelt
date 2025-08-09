#include <iostream>
using namespace std;

int main() {
    unsigned int a, b;
    cin >> a >> b;
    bool first = true;
    for (unsigned int number = a; number <= b; ++number) {
        if (number % 2 != 0) {
            continue;
        }
        if (first) {
            first = false;
        } else {
            cout << " ";
        }
        cout << number;
    }
    return 0;
}