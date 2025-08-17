#include <iostream>
#include <vector>
using namespace std;

int main() {
    unsigned int n;
    cin >> n;
    vector<unsigned int> temperatures(n);
    for (auto& temperature : temperatures) {
        cin >> temperature;
    }
    unsigned int sum = 0;
    for (auto temperature : temperatures) {
        sum += temperature;
    }
    double average = static_cast<double>(sum) / n;
    vector<unsigned int> indices;
    for (unsigned int i = 0; i < temperatures.size(); ++i) {
        if (temperatures[i] > average) {
            indices.push_back(i);
        }
    }
    cout << indices.size() << endl;
    bool first = true;
    for (auto index : indices) {
        if (first) {
            first = false;
        }
        else {
            cout << " ";
        }
        cout << index;
    }
    return 0;
}