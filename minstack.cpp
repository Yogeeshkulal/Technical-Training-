#include <iostream>
#include <stack>

using namespace std;

stack<int> s;
stack<int> minS;

void push(int val) {
    s.push(val);
    if (minS.empty() || val <= minS.top()) {
        minS.push(val);
    }
}

void pop() {
    if (!s.empty()) {
        if (s.top() == minS.top()) {
            minS.pop();
        }
        s.pop();
    }
}

int top() {
    return s.top();
}

int getMin() {
    return minS.top();
}

int main() {
    push(-2);
    push(0);
    push(-3);
    cout << getMin() << endl;
    pop();
    cout << top() << endl;
    cout << getMin() << endl;
    return 0;
}
