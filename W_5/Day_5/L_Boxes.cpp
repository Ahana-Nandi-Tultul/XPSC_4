#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n; 
        cin >> n;
        vector<long long int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<long long int>());
        long long int ans = 0, val= 0;
        for( int i = 0; i < n; i++)
        {
            if(val < v[i])
            {
                val = 0;
                ans++;
            }
            val ^= v[i];
        }
        
        cout << ans << "\n";
    }
    return 0;
}￼Enter
