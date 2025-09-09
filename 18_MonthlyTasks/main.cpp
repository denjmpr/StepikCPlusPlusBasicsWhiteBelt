#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    unsigned int q;
    cin >> q;
    const vector<unsigned short> monthDayCounts = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    unsigned int currentMonthIndex = 0;
    vector<vector<string> > monthlyTasks(monthDayCounts[currentMonthIndex]);
    for (unsigned int i = 0; i < q; ++i) {
        string s;
        cin >> s;
        if (s == "ADD") {
            unsigned int index;
            cin >> index;
            string task;
            cin >> task;
            monthlyTasks[index - 1].push_back(task);
            continue;
        }
        if (s == "DUMP") {
            int index;
            cin >> index;
            cout << monthlyTasks[index - 1].size();
            for (string &dayTask: monthlyTasks[index - 1]) {
                cout << " " << dayTask;
            }
            cout << "\n";
            continue;
        }
        if (s == "NEXT") {
            unsigned int nextMonthIndex = (currentMonthIndex + 1) % monthDayCounts.size();
            unsigned int currentMonthDayCount = monthDayCounts[currentMonthIndex];
            unsigned int nextMonthDayCount = monthDayCounts[nextMonthIndex];
            if (currentMonthDayCount > nextMonthDayCount) {
                for (unsigned int monthDayIndex = nextMonthDayCount; monthDayIndex < currentMonthDayCount; ++monthDayIndex) {
                    for (string &dayTask: monthlyTasks[monthDayIndex]) {
                        monthlyTasks[nextMonthDayCount - 1].push_back(dayTask);
                    }
                }
            }
            monthlyTasks.resize(nextMonthDayCount);
            currentMonthIndex = nextMonthIndex;
        }
    }
    return 0;
}
