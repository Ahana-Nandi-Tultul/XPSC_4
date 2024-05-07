#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);

        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        long long int l = 0, r = 1e10, m;
        sort(v.begin(), v.end());

        while(l < r) {
            m = (l + r) / 2;
            long long int w = 0;
            for(int i = 0; i < n; i++) {
                if(v[i] < m) {
                    w += (m - v[i]);
                }
            }
            if(w <= x) {
                l = m + 1;
            } else {
                r = m;
            }
        }

        cout << (l - 1) << "\n";
    }

    return 0;
}
