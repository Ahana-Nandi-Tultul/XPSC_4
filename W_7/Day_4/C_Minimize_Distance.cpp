#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> pos, neg;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if(x >= 0)
            {
                pos.push_back(x);
            }
            else
            {
                neg.push_back(abs(x));
            }
        }

        sort(pos.begin(), pos.end());
        sort(neg.begin(), neg.end());

        vector<int> nv(pos.begin(), pos.end());
        nv.insert(nv.end(), neg.begin(), neg.end());

        long long int ans = 0;
        for(int i = (k - 1); i < n; i += k)
        {
             if(i < (n - k))
            {
               ans += (nv[i] * 2);
            }
            else
            {
               ans += nv[i];
            }
        }

        cout << ans  << "\n";
    }
    return 0;
}

