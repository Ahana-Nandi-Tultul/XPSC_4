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

        vector<int> v(n), t;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        t = v;
        sort(t.begin(), t.end());
        int missed = n;
        for(int i = 0; i < n; i++)
        {
            if(t[i] != i)
            {
                missed = i;
                break;
            }
        }
        int bkb;
        for(int i = 0; i < n; i++)
        {
            bkb = v[i];
            v[i] = missed;
            missed = bkb;
        }

        v.push_back(missed);
        int last = (k-1) %(n+1);
        for(int i = (n+1-last); i < (n+1); i++)
        {
            cout << v[i] << " ";
        }

        for(int i = 0; i < (n-last); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
