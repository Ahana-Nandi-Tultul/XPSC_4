#include<bits/stdc++.h>
using namespace std;
long long int InvCnt(vector<int> &v, int n)
{
    long long int r = 0, co = 0;
    for(int i = 0; i < n; i++)
    {
        if(v[i] == 1)
        {
            co++;
        }
        else
        {
            r += co;
        }
    }
    return r;
}
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
        long long int ans = InvCnt(v, n);
        int id = -1;
        for(int i = 0; i < n; i++)
        {
            if(v[i] == 0)
            {
                v[i] = 1;
                id = i;
                break;
            }
        }

        ans = max(ans,InvCnt(v, n));
        if(id != -1)
        {
            v[id] = 0;
        }
        for(int i = (n-1); i >= 0; i--)
        {
            if(v[i] == 1)
            {
                v[i] = 0;
                break;
            }
        }

        ans = max(ans,InvCnt(v, n));
        cout << ans << "\n";
    }
    return 0;
}
