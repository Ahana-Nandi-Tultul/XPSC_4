#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        long long int low = 0, high = 10000000000000, ans = 0;

        auto possible = [&](long long int m) -> bool {
            int cnt = 1;
            for(int l = 0, r = l + 1; r < n;)
            {
                if(v[l]+m+m >= v[r])
                {
                    r++;
                }
                else
                {
                    l = r;
                    r = l;
                    cnt++;
                }
            }
            return (cnt < 4);
        };

        while(low <= high)
        {
            long long int mid = (low + (high - low) / 2LL);
            if(possible(mid))
            {
                ans = mid;
                high = mid - 1LL;
            }
            else
            {
                low = mid + 1LL;
            }
        }

        cout << ans << "\n";

    }
    return 0;
}
