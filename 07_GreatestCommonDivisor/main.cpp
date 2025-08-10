#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    unsigned int a, b;
    cin >> a >> b;
    unsigned int minimum = min(a, b);
    unsigned int maximum = max(a, b);
    unsigned int remainder = 0;
    do {
        remainder = maximum % minimum;
        maximum = minimum;
        minimum = remainder;
    } while(remainder != 0);
    cout << maximum;
    return 0;
}