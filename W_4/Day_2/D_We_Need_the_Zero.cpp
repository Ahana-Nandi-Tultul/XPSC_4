#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int xor_sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            xor_sum ^= v[i];
        }

        vector<int> xr(n);
        int xror_sum = 0;
        for(int i= 0; i < n; i++)
        {
            xr[i] = v[i] ^ xor_sum;
            xror_sum ^= xr[i];
        }

        if(xror_sum == 0)
        {
            cout << xor_sum << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
    return 0;
}

