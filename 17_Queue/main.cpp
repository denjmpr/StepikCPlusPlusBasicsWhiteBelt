#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    unsigned int q;
    cin >> q;
    vector<bool> queue;
    for (unsigned int i = 0; i < q; ++i) {
        string s;
        cin >> s;
        if (s == "COME") {
            int count;
            cin >> count;
            queue.resize(queue.size() + count);
            continue;
        }
        if (s == "WORRY") {
            int index;
            cin >> index;
            queue[index] = true;
            continue;
        }
        if (s == "QUIET") {
            int index;
            cin >> index;
            queue[index] = false;
            continue;
        }
        if (s == "WORRY_COUNT") {
            cout << count(queue.begin(), queue.end(), true) << endl;
        }
    }
    return 0;
}
