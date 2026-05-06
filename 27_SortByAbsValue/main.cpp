#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Print(const vector<int>& v) {
    bool first = true;
    for (const auto& i : v) {
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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), [](int x, int y) { return abs(x) < abs(y); });
    Print(a);
    return 0;
}
