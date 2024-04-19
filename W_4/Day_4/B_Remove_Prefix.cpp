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
        vector<int> v(n+1);
        map<int, int> mp;

        for(int i = 1; i <= n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        int cnt = 0;
        for(int i = 1; i <= n; i++)
        {
            int x = v[i];
            if(mp[x] > 1)
            {
                cnt = i;
                mp[x]--;
            }
        }

        cout << cnt << "\n";
    }
    return 0;
}
