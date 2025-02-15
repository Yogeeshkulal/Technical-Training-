#include <iostream>
#include <vector>
#include <string>

using namespace std;

void generate(int open, int close, string str, vector<string>& result) {
    if (open == 0 && close == 0) {
        result.push_back(str);
        return;
    }
    if (open > 0) generate(open - 1, close, str + "(", result);
    if (close > open) generate(open, close - 1, str + ")", result);
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    generate(n, n, "", result);
    return result;
}

int main() {
    int n = 3;
    vector<string> result = generateParenthesis(n);

    for (const string& s : result) cout << s << " ";
    cout << endl;

    return 0;
}
