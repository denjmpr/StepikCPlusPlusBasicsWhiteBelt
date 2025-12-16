#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main() {
    unsigned int route_number = 1;
    unsigned int q;
    cin >> q;
    map<vector<string>, unsigned int> routes;
    for (unsigned int i = 0; i < q; ++i) {
        unsigned int n;
        cin >> n;
        vector<string> stops(n);
        for (unsigned int j = 0; j < n; ++j) {
            cin >> stops[j];
        }
        if (routes.count(stops) == 1) {
            unsigned int route = routes[stops];
            cout << "Already exists for " << route << endl;
        } else {
            routes[stops] = route_number;
            cout << "New bus " << route_number << endl;
            ++route_number;
        }
    }
    return 0;
}
