#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> vn(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            cin >> vn[i];
        }

        vector<long long int> pre(n+2, 0);
        for(int i = 1; i <= n; i++)
        {
            pre[i] = (vn[i] + pre[i-1]);
        }

        vector<long long int> ans(q);
        vector<pair <int, int > >vq(q);
        for(int i = 0; i < q; i++)
        {
            cin >> vq[i].first;
            vq[i].second = i;
        }

        sort(vq.begin(), vq.end());
        int cnt = 0;
        for(int i = 0; i < q; i++)
        {
            while(cnt < n && vn[cnt+1] <= vq[i].first)
            {
                cnt++;
            }
            ans[vq[i].second] = pre[cnt];
        }

        for(int i = 0; i < q; i++)
        {
            cout << ans[i] << " ";
        }

        cout << "\n";
    }

    return 0;
}
