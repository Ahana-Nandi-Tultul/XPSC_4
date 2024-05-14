#include<bits/stdc++.h>
using namespace std;

int main() {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        int m = n / 2;
        int ans = v[m];
        long long int low = 0, high = 1e18 + 90;
        while (low <= high) {
            long long int mid = low + (high - low) / 2;

            long long int sum = 0;
            for (int i = m; i < n; i++) {
                if (v[i] <= mid)
                    sum += (mid - v[i]);
                if (sum > k)
                    break;

            }

            if (sum <= k) {
                ans = max(ans, (int)mid);
                low = mid + 1;
            } else
                high = mid - 1;
        }
        cout << ans << endl;
    return 0;
}
