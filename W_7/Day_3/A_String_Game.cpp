#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int cnt_0 = 0, cnt_1 = 0, cnt = 0;
        for (int i = 0; i < n; i++) {
           if(s[i] == '0') cnt_0++;
           else cnt_1++;

        }

        if(cnt_0 >= cnt_1)
        {
            cnt = cnt_1;
        }
        else
        {
            cnt = cnt_0;
        }

        if (cnt % 2 == 0) {
            cout << "Ramos\n";
        } else {
            cout << "Zlatan\n";
        }
    }
    return 0;
}
