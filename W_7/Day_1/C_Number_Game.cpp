#include<bits/stdc++.h>
using namespace std;

bool possible(vector<long long int> a, long long int n, long long int k) {
    multiset<long long int> s;
    for(long long int x: a) {
        s.insert(x);
    }

    for(int i = 1; i <= k; i++) {
        if(s.empty()) return false;
        long long int req = k - i + 1;
        auto li = s.upper_bound(req);
        if(li == s.begin()) return false;
        li--;

        //long long int v = *li;
        s.erase(li);

        if(!s.empty()) {
            li = s.begin();
            long long int v = (*li);
            v += req;
            s.erase(li);
            s.insert(v);
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long int> v(n);

        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        long long int low = 0, high = n, k = 0;
        while(low <= high) {
            long long int mid = low + (high - low) / 2;
            if(possible(v, n, mid)) {
                k = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        cout << k << endl;
    }
    return 0;
}
