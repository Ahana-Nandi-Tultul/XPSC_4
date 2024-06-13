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
            if(x > 0)
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
        long long int ans = 0;
        int a = 0, b = 0;
        if(!pos.empty())
        {
            if(pos.size() < k)
            {
                a = pos[pos.size() - 1];
                ans += a;
            }
            else
            {
                a = pos[pos.size() - 1];
                for(int i = 0; i < pos.size(); i++)
                {
                    if(i == (pos.size() - 1))
                    {
                        ans += pos[i];
                    }
                    else if((pos.size() - i - 1) % k == 0)
                    {
                        ans += (pos[i] * 2);
                    }
                }
            }
        }
        if(!neg.empty())
        {
            if(neg.size() < k)
            {
                b = neg[neg.size() - 1];
                ans += b;
            }
            else
            {
                b = neg[neg.size() - 1];
                for(int i = 0; i < neg.size(); i++)
                {
                    if(i == (neg.size() - 1))
                    {
                        ans += neg[i];
                    }
                    else if((neg.size()  - i - 1) % k == 0)
                    {
                        ans += (neg[i] * 2);
                    }
                }
            }
        }

        ans += min(a, b);
        cout << ans << "\n";
    }
    return 0;
}

