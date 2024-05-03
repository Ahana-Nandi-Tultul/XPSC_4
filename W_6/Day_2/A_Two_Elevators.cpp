#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if(a == 1)
        {
            cout << 1 << "\n";
            continue;
        }

        int f = a - 1;
        int s = 0;
        if(b >= c)
        {
            s = b - 1;
        }
        else
        {
            s += (c - b);
            s += (c-1);
        }

        if(f < s)
        {
            cout << 1 << "\n";
        }
        else if(f== s)
        {
            cout << 3 <<"\n";
        }
        else
        {
            cout << 2 << "\n";
        }
    }
    return 0;
}
