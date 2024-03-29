#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        long long int ans = -1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                long long sum = 0;
                // -1, -1
                for (int k = 1; i - k >= 0 && j - k >= 0; k++)
                {
                    sum += a[i - k][j - k];
                }
                // 1, 1
                for (int k = 1; i + k < n && j + k < m; k++)
                {
                    sum += a[i + k][j + k];
                }

                // 1, -1
                for (int k = 1; i + k < n && j - k >= 0; k++)
                {
                    sum += a[i + k][j - k];
                }

                // -1, 1;
                for (int k = 1; i - k >= 0 && j + k < m; k++)
                {
                    sum += a[i - k][j + k];
                }
                sum += a[i][j];
                ans = max(ans, sum);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
