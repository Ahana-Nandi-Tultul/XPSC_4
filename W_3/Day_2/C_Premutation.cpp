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
        int a[n][n];
        set<int> s;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                s.insert(a[i][j]);
            }
        }

        for(auto & it: s)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}
