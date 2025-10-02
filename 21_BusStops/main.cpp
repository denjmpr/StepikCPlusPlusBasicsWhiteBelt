#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main() {
    unsigned int q;
    cin >> q;
    map<string, vector<string>> stops;
    map<string, vector<string>> buses;
    for (unsigned int i = 0; i < q; ++i) {
        string command;
        cin >> command;
        if (command == "NEW_BUS") {
            string bus;
            unsigned int stops_count;
            cin >> bus >> stops_count;
            for (unsigned int j = 0; j < stops_count; ++j) {
                string stop;
                cin >> stop;
                stops[bus].push_back(stop);
                buses[stop].push_back(bus);
            }
            continue;
        }
        if (command == "BUSES_FOR_STOP") {
            string stop;
            cin >> stop;
            if (buses.count(stop) == 0) {
                cout << "No stop" << endl;
            } else {
                const vector<string>& stop_buses = buses[stop];
                bool first = true;
                for (auto const& stop_bus : stop_buses) {
                    if (first) {
                        first = false;
                    } else {
                        cout << " ";
                    }
                    cout << stop_bus;
                }
                cout << endl;
            }
            continue;
        }
        if (command == "STOPS_FOR_BUS") {
            string bus;
            cin >> bus;
            if (stops.count(bus) == 0) {
                cout << "No bus" << endl;
            } else {
                vector<string>& bus_stops = stops[bus];
                for (auto const &bus_stop: bus_stops) {
                    cout << "Stop " << bus_stop << ":";
                    const vector<string>& stops_buses = buses[bus_stop];
                    if (stops_buses.size() == 1) {
                        cout << " no interchange";
                    } else {
                        for (auto const &stop_bus: stops_buses) {
                            if (bus != stop_bus) {
                                cout << " " << stop_bus;
                            }
                        }
                    }
                    cout << endl;
                }
            }
            continue;
        }
        if (command == "ALL_BUSES") {
            if (stops.empty()) {
                cout << "No buses" << endl;
            } else {
                for (auto const &[bus, bus_stops]: stops) {
                    cout << "Bus " << bus << ":";
                    for (auto const &bus_stop: bus_stops) {
                        cout << " " << bus_stop;
                    }
                    cout << endl;
                }
            }
        }
    }
    return 0;
}
