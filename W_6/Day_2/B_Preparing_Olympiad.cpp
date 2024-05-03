#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, l, r, x;
    cin >> n >> l >> r >> x;

    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    int ans = 0;
    for (int m = 0; m < (1 << n); m++) {
        int mn = INT_MAX, mx = INT_MIN, cnt = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            if ((m & (1 << i)) != 0) {
                cnt++;
                sum += c[i];
                mn = min(mn, c[i]);
                mx = max(mx, c[i]);
            }
        }

        if (mx - mn >= x && sum >= l && sum <= r && cnt >= 2) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
