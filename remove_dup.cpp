#include <iostream>
#include <stack>
using namespace std;

string removeDuplicates(string s) {
    stack<char> st;
    
    for (char ch : s) {
        if (!st.empty() && st.top() == ch) {
            st.pop();
        } else {
            st.push(ch);
        }
    }
    
    string result = "";
    while (!st.empty()) {
        result = st.top() + result;
        st.pop();
    }
    
    return result;
}

int main() {
    string s1 = "aabbccdde";
    cout << "Output: " << removeDuplicates(s1) << endl;
    string s2 = "aabccd";
    cout << "Output: " << removeDuplicates(s2) << endl;
    
    return 0;
}
