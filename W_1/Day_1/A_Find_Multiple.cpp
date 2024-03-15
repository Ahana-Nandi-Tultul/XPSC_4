#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(c > b)
    {
        cout << "-1" << '\n';
        return 0;
    }
    int i = 1, ans = -1;
    while(c <= b)
    {
        c = (c * i);
        if(c >= a && c <= b)
        {
            ans = c;
            break;
        }
        i++;
    }
    cout << ans << '\n';
    return 0;
}
