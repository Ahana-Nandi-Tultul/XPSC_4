#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m, h;
        cin >> n >> m >> h;

        vector<int> e(n);
        vector<long long> p(m);

        for(int i = 0; i < n; i++) {
            cin >> e[i];
        }

        for(int i = 0; i < m; i++) {
            int x;
            cin >> x;
            p[i] = 1ll * x * h;
        }

        long long sum = 0;
        sort(p.begin(), p.end(), greater<long long>());
        sort(e.begin(), e.end(), greater<int>());

        int k = min(n, m);
        for(int i = 0; i < k; i++) {
            if(e[i] < p[i])
            {
                sum += e[i];
            }
            else
            {
                sum += p[i];
            }
        }

        cout << sum << "\n";
    }
    return 0;
}
