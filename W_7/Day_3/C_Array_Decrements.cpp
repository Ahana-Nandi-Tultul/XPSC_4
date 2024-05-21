#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        if (n == 1) {
            if (b[0] > a[0]) {
                cout << "NO" << "\n";
            } else {
                cout << "YES" << "\n";
            }
            continue;
        }

        bool ans = true;
        int zeroCount = 0;
        map<int, int> diff_count;

        for (int i = 0; i < n; i++) {
            if (b[i] > a[i]) {
                ans = false;
                break;
            }
            if (b[i] != 0) {
                diff_count[a[i] - b[i]]++;
            } else {
                zeroCount++;
            }
        }

        if (ans) {
            if (diff_count.size() == 1 && zeroCount == 0) {
                cout << "YES" << "\n";
            } else if (diff_count.size() > 1) {
                cout << "NO" << "\n";
            } else {
                bool valid = true;
                int consistentDiff = (diff_count.size() == 1) ? diff_count.begin()->first : -1;

                for (int i = 0; i < n; i++) {
                    if (b[i] == 0) {
                        if (consistentDiff != -1 && a[i] > consistentDiff) {
                            valid = false;
                            break;
                        }
                    }
                }

                if (valid) {
                    cout << "YES" << "\n";
                } else {
                    cout << "NO" << "\n";
                }
            }
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
