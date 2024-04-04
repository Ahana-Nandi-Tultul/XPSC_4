#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<pair<long long int, long long int>> a;
        vector<pair<long long int, long long int>> b;
        vector<pair<long long int, long long int>> c;
        for(int i = 0; i< n; i++)
        {
            long long int x;
            cin >> x;
            a.push_back({x, i});
        }
        for(int i = 0; i< n; i++)
        {
            long long int x;
            cin >> x;
            b.push_back({x, i});
        }
        for(int i = 0; i< n; i++)
        {
            long long int x; // Corrected data type
            cin >> x;
            c.push_back({x, i});
        }
        sort(a.begin(), a.end(), greater<>());
        sort(b.begin(), b.end(), greater<>());
        sort(c.begin(), c.end(), greater<>());

        long long int s = 0;
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                for(int k = 0; k < 3; k++)
                {
                    if(a[i].second != b[j].second && a[i].second != c[k].second && b[j].second != c[k].second)
                    {
                        s = max((a[i].first + b[j].first + c[k].first), s);
                    }
                }
            }
        }
        cout << s << "\n";
    }
    return 0;
}
