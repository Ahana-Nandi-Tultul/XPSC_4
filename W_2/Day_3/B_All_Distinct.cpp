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
        set<int> s;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }

        int si = s.size();
        if(n == si)
        {
            cout << si << endl;
        }
        else if((n%2) == 0 && (si % 2 == 0))
        {
            cout << si << endl;
        }
        else if((n%2) == 0 && (si % 2 != 0))
        {
            cout << (si - 1) << endl;
        }
        else if((n%2) != 0 && (si % 2 == 0))
        {
            cout << (si - 1) << endl;
        }
        else if((n%2) != 0 && (si % 2 != 0))
        {
            cout << si << endl;
        }

    }
    return 0;
}
