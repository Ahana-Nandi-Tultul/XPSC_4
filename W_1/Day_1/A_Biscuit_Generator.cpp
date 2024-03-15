#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, t;
    cin >> a >> b >> t;
    int ans = 0;
    while(t >= a)
    {
        ans += b;
        t = t - a;
    }
    cout << ans << '\n';
    return 0;
}
