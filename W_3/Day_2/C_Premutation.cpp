#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int m = n - 1;
        int a[n][m];
        map<int, int> mp;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> a[i][j];
                if(j == (m-1)) {
                    mp[a[i][j]]++;
                }
            }
        }

        int x = -1, y = -1;
        for(int i = 0; i < n; i++)
        {
            if(y < mp[a[i][m-1]])
            {
                x = a[i][m-1];
                y =  mp[a[i][m-1]];
            }
        }
        int ci;
        for(int i = 0; i < n; i++) {
            bool found = false;
            for(int j = 0; j < m; j++) {
               if(x == a[i][j])
               {
                   found = true;
                   break;
               }
            }
            if(!found) {
                ci = i;
                break;
            }
        }

        for(int i = 0; i < m; i++)
        {

            cout << a[ci][i] << " ";
        }
        cout << x << endl;
    }
    return 0;
}
