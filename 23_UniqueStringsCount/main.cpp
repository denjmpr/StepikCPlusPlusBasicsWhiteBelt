#include <iostream>
#include <set>
using namespace std;

int main() {
    unsigned int n;
    cin >> n;
    set<string> unique_strings;
    for (unsigned int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        unique_strings.insert(s);
    }
    cout << unique_strings.size() << endl;
    return 0;
}