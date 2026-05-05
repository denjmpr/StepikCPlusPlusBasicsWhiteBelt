#include <iostream>
#include <set>
#include <map>
using namespace std;

int main() {
    map<set<string>, int> routes;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int n;
        cin >> n;
        set<string> stops;
        for (int j = 0; j < n; j++) {
            string stop;
            cin >> stop;
            stops.insert(stop);
        }
        int route_index = routes.size() + 1;
        auto [route, inserted] = routes.insert({stops, route_index});
        if (inserted) {
            cout << "New bus " << route->second << endl;
        } else {
            cout << "Already exists for " << route->second << endl;
        }
    }
    return 0;
}
