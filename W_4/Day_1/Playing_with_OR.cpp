#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, k;
        cin >> n >> k;

        vector<long long int> v(n);
        for (long long int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int odd = 0, ans = 0;
       for(int i = 0; i < k; i++)
       {
           if(v[i] % 2 != 0)
           {
               odd++;
           }
       }

       if(odd > 0)
       {
           ans++;
       }
       for(int i = k; i < n; i++)
       {
           if(v[i-k] % 2 != 0)
           {
               odd--;
           }
           if(v[i] %2 != 0)
           {
               odd++;
           }

           if(odd > 0)
           {
               ans++;
           }
       }

       cout << ans << endl;
    }

    return 0;
}
