#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    cout << min({a, b, c});
    return 0;
}