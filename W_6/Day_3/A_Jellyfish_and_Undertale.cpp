#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, n;
        cin >> a >>b >> n;
        vector<int> v(n);

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        long long int timer = b;
        for(int i = 0;  i < n; i++)
        {
            timer += min(v[i], a-1);
        }

        cout << timer << "\n";

    }
    return 0;
}
