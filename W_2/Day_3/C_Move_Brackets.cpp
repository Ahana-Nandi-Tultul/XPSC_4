#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int b = 0, un = 0;
        for(char c : s)
        {
            if(c == '(')
            {
               b++;
            }
            else
            {
                b--;
                if(b < 0)
                {
                    un++;
                    b = 0;
                }
            }
        }
        int ans = (un + b) / 2;

        cout << ans << '\n';
    }

    return 0;
}
