#include <iostream>
#include <string>
using namespace std;

bool IsPalindrom(string str) {
    size_t size = str.size();
    if (size == 0) {
        return true;
    }
    for (int i = 0; i < size / 2; i++) {
        if (str[i] != str[size - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string str;
    cin >> str;
    cout << IsPalindrom(str);
    return 0;
}