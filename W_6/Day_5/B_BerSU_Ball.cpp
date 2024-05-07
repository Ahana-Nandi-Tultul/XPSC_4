#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> boys(n);
    for (int i = 0; i < n; i++) {
        cin >> boys[i];
    }

    int m;
    cin >> m;
    vector<int> girls(m);
    for (int i = 0; i < m; i++) {
        cin >> girls[i];
    }

    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());

    int p = 0;
    int j = 0;

    for (int i = 0; i < n && j < m; i++) {
        while (j < m && girls[j] < boys[i] - 1) {
            j++;
        }
        if (j < m && girls[j] <= boys[i] + 1) {
            //cout << boys[i] << " " << girls[j] << "\n";
            p++;
            j++;
        }
    }

    cout << p << "\n";
    return 0;
}
