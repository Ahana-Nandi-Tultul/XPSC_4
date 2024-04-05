#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int rw = 0;
        for(int i= 0; i<n; i++)
        {
            rw ^= v[i];
        }

        int mn_xor = rw;
        for(int i= 0; i<n; i++)
        {
            int ar = rw ^ v[i];
            mn_xor = min(mn_xor, ar);
        }
        cout << mn_xor << "\n";
    }

    return 0;
}
