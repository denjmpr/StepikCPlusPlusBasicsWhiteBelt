#include <iostream>
#include <vector>
using namespace std;

int main() {
    unsigned int n;
    cin >> n;
    unsigned int quotient = 0;
    unsigned int remainder = 0;
    vector<unsigned int> output{};
    do {
        quotient = n / 2;
        remainder = n % 2;
        output.push_back(remainder);
        n = quotient;
    } while (n != 0);
    for (unsigned int i = output.size(); i > 0; --i) {
        cout << output[i - 1];
    }
    return 0;
}
