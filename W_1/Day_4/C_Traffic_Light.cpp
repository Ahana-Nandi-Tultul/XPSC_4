#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin.ignore();
        char c;
        string s;
        cin >> n >> c >> s;

        s += s;
        int cnt = 0, rq = 0, f = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == c) {
                f = 1;
            }

            if (s[i] == 'g') {
                rq = max(rq, cnt);
                f = 0;
                cnt = 0;
            }
            if (f == 1) {
                cnt++;
            }
        }
        cout << rq << endl;
    }
    return 0;
}
