#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int a, b, n, s;
        cin >> a >> b >> n >> s;

        long long int r = s % n;

        if(r <= b && (((a * n) + b) >= s))
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}
