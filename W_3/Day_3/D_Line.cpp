#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cin.ignore();
        string s;
        cin >> s;

        long long int sum = 0;
        vector<long long int> d(n, 0);
        for(int i = 0; i < n; i++)
        {
            int ci = 0;
            if(s[i] == 'L')
            {
                ci = i;
            }
            else
            {
                ci = n-i-1;
            }
            int mx = 0;
            if(i > (n-i-1))
            {
                mx = i;
            }
            else
            {
                mx = n-i-1;
            }
            int df = mx - ci;
            sum += ci;
            d[i] = df;
        }
        sort(d.begin(), d.end(), greater<int>());

        for(int i = 0; i < n; i++)
        {
            sum += d[i];
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}
