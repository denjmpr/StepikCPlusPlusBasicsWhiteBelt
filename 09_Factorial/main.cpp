#include <iostream>
using namespace std;

int Factorial(int n) {
    if (n <= 0) {
        return 1;
    }
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    cout << Factorial(n);
    return 0;
}