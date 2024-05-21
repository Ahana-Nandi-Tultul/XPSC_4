#include<bits/stdc++.h>
using namespace std;

int main() {
    long t;
    cin >> t;

    while (t--) {
        long n;
        cin >> n;
        vector<long> v;
        set<long> s;

        for (long p = 0; p < n; ++p) {
            long x;
            cin >> x;
            if (x <= n && !s.count(x)) {
                s.insert(x);
            } else {
                v.push_back(x);
            }
        }

        sort(v.begin(), v.end());

        long cnt = v.size();
        long idx = 0;

        for (long p = 1; p <= n; ++p) {
            if (s.count(p)) {
                continue;
            }
            if (idx < v.size() && v[idx] <= 2 * p) {
                cnt = -1;
                break;
            }
            ++idx;
        }

        cout << cnt << endl;
    }

    return 0;
}
