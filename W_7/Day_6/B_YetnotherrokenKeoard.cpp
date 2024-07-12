#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        stack<int> st1, st2;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z' && s[i] != 'B') {
                st1.push(i);
            } else if (s[i] >= 'a' && s[i] <= 'z' && s[i] != 'b') {
                st2.push(i);
            } else if (s[i] == 'B' && !st1.empty()) {
                s[st1.top()] = '\0';
                st1.pop();
            } else if (s[i] == 'b' && !st2.empty()) {
                s[st2.top()] = '\0';
                st2.pop();
            }
        }

        string result;
        for (char c : s) {
            if (c != '\0' && c != 'B' && c != 'b') {
                result += c;
            }
        }

        cout << result << endl;
    }
    return 0;
}
