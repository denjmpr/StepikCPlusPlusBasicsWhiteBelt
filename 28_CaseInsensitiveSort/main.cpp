#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

void Print(const vector<string> &v) {
    bool first = true;
    for (const auto &i: v) {
        if (!first) {
            cout << " ";
        } else {
            first = false;
        }
        cout << i;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), [](const string &x, const string &y) {
        return lexicographical_compare(
            x.begin(), x.end(),
            y.begin(), y.end(),
            [](char c1, char c2) { return tolower(c1) < tolower(c2); }
        );
    });
    Print(a);
    return 0;
}
