#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    unsigned int position = 0;
    unsigned int count = 0;
    for (position = 0; position < str.length() && count < 2; ++position) {
        if (str[position] == 'f') {
            count++;
        }
    }
    if (count == 2) {
        cout << position - 1;
        return 0;
    }
    if (count == 1) {
        cout << -1;
        return 0;
    }
    if (count == 0) {
        cout << -2;
        return 0;
    }
    return 0;
}