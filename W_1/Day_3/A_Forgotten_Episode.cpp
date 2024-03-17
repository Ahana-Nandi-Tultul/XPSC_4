#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n+1];
    int m = n-1;
    for(int i = 1; i < n; i++)
    {
        a[i] = 0;
    }
    for(int i = 1; i <= m; i++)
    {
        int x;
        cin >> x;
        a[x] = 1;
    }

    for(int i = 1; i <= n ; i++)
    {
        if(a[i] != 1)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
