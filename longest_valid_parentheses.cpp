#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int longestValidParentheses(string s) {
    int n = s.size();
    if (n == 0) return 0;
    int maxLen = 0;
    vector<int> stk;
    stk.push_back(-1);
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            stk.push_back(i);
        } else {
            stk.pop_back();
            if (stk.empty()) {
                stk.push_back(i);
            } else {
                int len = i - stk.back();
                maxLen = max(maxLen, len);
            }
        }
    }
    return maxLen;
}

int main() {
    string s;
    cout << "Enter the string (only '(' and ')'): ";
    cin >> s;
    int result = longestValidParentheses(s);
    cout << "Longest valid parentheses substring length: " << result << endl;
    return 0;
}
