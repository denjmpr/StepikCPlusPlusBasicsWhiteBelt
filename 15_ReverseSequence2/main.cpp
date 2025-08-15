#include <iostream>
#include <vector>
using namespace std;

vector<int> Reversed(const vector<int>& v) {
    vector<int> reversed(v.size());
    for (int i = 0; i < v.size(); ++i) {
        reversed[reversed.size() - 1 - i] = v[i];
    }
    return reversed;
}

int main() {
    vector<int> numbers = {1, 5, 3, 4, 2};
    vector<int> reversed = Reversed(numbers);
    bool first = true;
    for (auto reversed_number : reversed) {
        if (first) {
            first = false;
        } else {
            cout << " ";
        }
        cout << reversed_number;
    }
    return 0;
}