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
        int a[n+1];
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int cnt = 0;
        for(int i = 1; i <= n; i++)
        {
            if(a[i] > i)
            {
                cnt = max(cnt, a[i] - i);
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}
