#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int op = 0, ans = 0;
        for(int i = 0; i  < n; i++)
        {
            if(v[i] <= q)
            {
                op++;
            }
            else
            {
                op = 0;
            }
            ans += max(0, op-k+1);
        }
        cout << ans << endl;
    }
    return 0;
}
