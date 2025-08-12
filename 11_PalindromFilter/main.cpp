#include <iostream>
#include <string>
#include <vector>
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

vector<string> PalindromFilter(vector<string> words, int minLength) {
    vector<string> palindroms;
    for (string word : words) {
        if (word.size() >= minLength && IsPalindrom(word)) {
            palindroms.push_back(word);
        }
    }
    return palindroms;
}

int main() {
    vector<string> words1 = {"abacaba", "aba"};
    cout << PalindromFilter(words1, 5).size() << endl;
    vector<string> words2 = {"abacaba", "aba"};
    cout << PalindromFilter(words1, 2).size() << endl;
    vector<string> words3 = {"weew", "bro", "code"};
    cout << PalindromFilter(words1, 4).size() << endl;
    return 0;
}