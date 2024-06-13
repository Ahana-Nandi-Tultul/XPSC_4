#include <bits/stdc++.h>
using namespace std;

int n_div(multiset<int> &a, int k) {
    int s = 0;
    for (int i = 1; i*i <= k; i++) {
        int m = (k % i);
        if (m == 0) {
            //cout << i << " ";
            s += a.count(i);
            if(i *i != k)
            {
                s+= a.count(k / i);
            }
        }
    }
   // cout << " ";
    return s;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        multiset<int> a;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x <= n) {
                a.insert(x);
            }
        }

        if (!a.empty()) {
            int mx = 0;
            for (auto it = a.begin(); it != a.end(); ++it) {
                mx = max(mx, n_div(a, *it));
            }
            cout << mx << "\n";
        } else {
            cout << 0 << "\n";
        }
    }
    return 0;
}
