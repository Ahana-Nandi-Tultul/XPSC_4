#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    int a[n1], b[n2];

    for(int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }

    int l = 0, r = 0;
    long long ans = 0;
    while(l < n1 && r < n2)
    {
        int cnt1 = 0, cnt2 = 0, curr = a[l];
        while(a[l] == curr && l < n1)
        {
            cnt1++;
            l++;
        }
        while(curr > b[r] && r < n2)
        {
            r++;
        }
        while(b[r] == curr && r < n2)
        {
            cnt2++;
            r++;
        }
        ans += (1LL * cnt1 * cnt2);
    }
    cout << ans << '\n';
    return 0;
}
