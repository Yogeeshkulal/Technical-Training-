#include <iostream>
#include <list>

using namespace std;

list<int> removeNthFromEnd(list<int>& lst, int n) {
    auto fast = lst.begin(), slow = lst.begin();
    advance(fast, n);  

    if (fast == lst.end()) {
        lst.pop_front();
        return lst;
    }

    while (next(fast) != lst.end()) {
        ++fast;
        ++slow;
    }

    lst.erase(next(slow));
    return lst;
}

int main() {
    list<int> lst = {1, 2, 3, 4, 5};
    int n = 2;

    lst = removeNthFromEnd(lst, n);

    for (int num : lst) cout << num << " ";
    cout << endl;

    return 0;
}
