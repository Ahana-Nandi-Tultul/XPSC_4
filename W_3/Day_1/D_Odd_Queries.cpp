#include<bits/stdc++.h>
using namespace std;

bool isOdd(long long int x) {
    return x % 2 != 0;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        vector<long long int> pre(n + 1, 0);
        pre[0] = 0;
        for(int i = 1; i <= n ;i++) {
            pre[i] = pre[i-1] + v[i-1];
        }

        while(m--) {
            long long int a, b, c;
            cin >> a >> b >> c;
            a = a - 1;
            b = b - 1;

            long long int diff = ((b - a + 1) * c);
            diff = diff - (pre[b + 1] - pre[a]);
            int sum = pre[n] + diff;

            if(isOdd(sum)) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
