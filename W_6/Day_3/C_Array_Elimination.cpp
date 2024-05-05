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
        vector<int> v(n), r(33);

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < 32; j++)
            {
                if(v[i] & (1 << j)) r[j]++;
            }
        }

        vector<int> ans;
        for(int i = 1; i < (n+1); i++)
        {
            bool ok = true;
            for(int j = 0; j < 32; j++)
            {
                if(r[j] % i != 0)
                {
                    ok = false;
                    break;
                }
            }

            if(ok) ans.push_back(i);
        }

        sort(ans.begin(), ans.end());
        for(int x: ans)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
