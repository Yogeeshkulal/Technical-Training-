#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Task {
    char id;
    int deadline, profit;
};

bool compare(Task a, Task b) {
    return a.profit > b.profit;
}

void jobScheduling(vector<Task> &tasks) {
    sort(tasks.begin(), tasks.end(), compare);

    int n = tasks.size(), maxDeadline = 0;
    for (auto task : tasks)
        maxDeadline = max(maxDeadline, task.deadline);

    vector<char> schedule(maxDeadline, '-');
    vector<bool> slot(maxDeadline, false);
    int maxProfit = 0;

    for (auto task : tasks) {
        for (int j = min(maxDeadline, task.deadline) - 1; j >= 0; j--) {
            if (!slot[j]) {
                schedule[j] = task.id;
                slot[j] = true;
                maxProfit += task.profit;
                break;
            }
        }
    }

    cout << "Scheduled Tasks: ";
    for (char t : schedule)
        if (t != '-')
            cout << t << " ";
    cout << "\nMax Profit = " << maxProfit << endl;
}

int main() {
    vector<Task> tasks = {{'A', 2, 100}, {'B', 1, 50}, {'C', 2, 10}, 
                          {'D', 1, 20}, {'E', 3, 30}};

    jobScheduling(tasks);
    return 0;
}
