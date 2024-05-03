#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(m+1);
    for(int i = 0; i <= m; i++)
    {
        cin >> v[i];
    }

    vector<vector<int> > am;
    for(int ma = 0; ma <= m; ma++)
    {
        vector<int> tmp;
        for(int k = 0; k < n; k++)
        {
            if((v[ma] >> k) & 1)
            {
                tmp.push_back(1);
            }
            else
            {
                tmp.push_back(0);
            }
        }

        am.push_back(tmp);
    }

    int ans = 0;
    vector<int> fm = am[m];
    for(int i = 0; i < am.size() - 1; i++)
    {
        vector<int> temp = am[i];
        int cnt = 0;
        for(int k = 0; k < n; k++)
        {
            if(fm[k] != temp[k])
            {
                cnt++;
            }
        }

        if(cnt <= k)
        {
            ans++;
        }
    }

    cout << ans << "\n";
    return 0;
}
