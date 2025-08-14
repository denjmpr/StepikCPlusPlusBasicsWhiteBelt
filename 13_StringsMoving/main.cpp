#include <iostream>
#include <vector>
#include <string>
#include <bits/ostream.tcc>
using namespace std;

void MoveStrings(vector<string> &source, vector<string> &destination) {
    for (auto &str : source) {
        destination.push_back(str);
    }
    source.clear();
}

int main() {
    vector<string> source = {"a", "b", "c"};
    vector<string> destination = {"z"};
    MoveStrings(source, destination);
    bool first = true;
    for (auto &str : destination) {
        if (first) {
            first = false;
        }
        else {
            cout << " ";
        }
        cout << str;
    }
    return 0;
}