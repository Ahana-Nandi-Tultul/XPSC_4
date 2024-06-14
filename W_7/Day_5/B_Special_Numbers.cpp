#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

long long binpow(long long a, long long b, long long mod) {
    long long res = 1;
    while (b > 0) {
        if (b & 1) {
            res = res * a % mod;
        }
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        long long ans = 0;
        for (int i = 0; i < 32; i++) {
            if ((1 << i) & k) {
                ans = (ans + binpow(n, i, MOD)) % MOD;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
