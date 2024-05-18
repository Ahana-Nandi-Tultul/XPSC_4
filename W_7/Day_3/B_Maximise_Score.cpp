#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                b[i] = abs(v[i] - v[i+1]);
            } else if (i < n - 1) {
                int s1 = abs(v[i] - v[i+1]);
                int s2 = abs(v[i] - v[i-1]);
                b[i] = max(s1, s2);
            } else {
                b[i] = abs(v[i] - v[i-1]);
            }
        }

        sort(b.begin(), b.end());
        cout << b[0] << "\n";
    }
}
