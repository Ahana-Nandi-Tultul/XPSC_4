#include<bits/stdc++.h>
using namespace std;

bool cpal(const string& s, int k) {
    unordered_map<char, int> f;
    for (char c : s) {
        f[c]++;
    }

    int odd = 0;
    for (auto& p : f) {
        if (p.second % 2 != 0) {
            odd++;
        }
    }
    return odd <= k + 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cin.ignore();
        string s;
        cin >> s;

        if (cpal(s, k)) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}
