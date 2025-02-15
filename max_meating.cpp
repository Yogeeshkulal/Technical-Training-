#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Meeting {
    int start, end;
};

bool compare(Meeting a, Meeting b) {
    return a.end < b.end;
}

void maxMeetings(vector<int> &start, vector<int> &end) {
    vector<Meeting> meetings;
    for (size_t i = 0; i < start.size(); i++) {
        meetings.push_back({start[i], end[i]});
    }
    
    sort(meetings.begin(), meetings.end(), compare);
    
    int lastEnd = 0, count = 0;
    for (auto &m : meetings) {
        if (m.start >= lastEnd) {
            cout << "(" << m.start << ", " << m.end << ")\n";
            lastEnd = m.end;
            count++;
        }
    }
    cout << "Maximum meetings: " << count << endl;
}

int main() {
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end = {2, 4, 6, 7, 9, 9};
    maxMeetings(start, end);
    return 0;
}
