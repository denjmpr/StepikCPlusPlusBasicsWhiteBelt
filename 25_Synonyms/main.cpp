#include <iostream>
#include <map>
#include <set>
#include <string>
using namespace std;

int main() {
    map<string, set<string>> dict;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        string command;
        cin >> command;
        if (command == "ADD") {
            string word1, word2;
            cin >> word1 >> word2;
            dict[word1].insert(word2);
            dict[word2].insert(word1);
        } else if (command == "COUNT") {
            string word;
            cin >> word;
            if (dict.count(word) == 0) {
                cout << 0 << endl;
            } else {
                cout << dict[word].size() << endl;
            }
        } else if (command == "CHECK") {
            string word1, word2;
            cin >> word1 >> word2;
            if (dict.count(word1) == 0 || dict[word1].count(word2) == 0) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}
