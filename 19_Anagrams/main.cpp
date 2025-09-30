#include <iostream>
#include <array>
#include <vector>
#include <map>
using namespace std;

map<char, unsigned int> BuildCharCounters(const string &word) {
    map<char, unsigned int> result;
    for (const char &c: word) {
        ++result[c];
    }
    return result;
}

int main() {
    unsigned int n;
    cin >> n;
    vector<array<string, 2> > words(n);
    for (unsigned int i = 0; i < n; ++i) {
        cin >> words[i][0] >> words[i][1];
    }
    for (unsigned int i = 0; i < n; ++i) {
        if (BuildCharCounters(words[i][0]) == BuildCharCounters(words[i][1])) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
