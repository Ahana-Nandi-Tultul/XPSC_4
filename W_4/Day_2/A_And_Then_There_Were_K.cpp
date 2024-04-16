#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int cnt = 0;
        int tmp = n;
        while (tmp > 0)
        {
            tmp >>= 1;
            cnt++;
        }
        int k = (1 << (cnt - 1)) - 1;
        cout << k << "\n";
    }
    return 0;
}
