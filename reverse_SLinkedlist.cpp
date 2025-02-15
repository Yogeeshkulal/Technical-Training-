#include <iostream>
#include <list>

using namespace std;

void reverseList(list<int> &l) {
    l.reverse();
}

void printList(const list<int> &l) {
    for (int val : l) {
        cout << val << " -> ";
    }
    cout << "NULL" << endl;
}

int main() {
    list<int> l = {1, 2, 3, 4, 5};

    cout << "Original List: ";
    printList(l);

    reverseList(l);

    cout << "Reversed List: ";
    printList(l);

    return 0;
}
