#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        map<int, int> mp;
        int mx = 0;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            mx = max(mx, mp[x]);
        }

        int nd = n - mx;
        while(mx < n) {
            mx *= 2;
            nd++;
        }

        cout << nd << "\n";
    }
    return 0;
}
