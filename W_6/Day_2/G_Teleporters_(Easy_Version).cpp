#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, c;
        cin >> n >> c;
        vector<int> v(n);

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            v[i] += (i+1);
        }

        sort(v.begin(), v.end());
        int sum = 0, teleporters = 0;
        bool ans = false;
        for (int i = 0; i < n; ++i) {
             sum += v[i];
            if(sum > c)
            {
                ans = true;
                teleporters = i;
                break;
            }
        }
        if(ans)
        {
            cout << teleporters << "\n";
        }
        else
        {
            cout << n << "\n";
        }
    }
    return 0;
}

