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
        int m  = (((n * n) - n) / 2);
        vector<int> v(n), v1(m);

        for(int i = 0; i < m; i++)
        {
            cin >> v1[i];
        }

        sort(v1.begin(), v1.end());
        int m = (n+n), x = 0;
        while(m-x >0)
        {
            v.push_back(v1[(m-x]);
            x++;
        }

        for(int num : v)
        {
            cout << num << " ";
        }
    }
    return 0;
}
