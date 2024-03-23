#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<pair<int, string> > pairs;
        for(int i = 0; i < n; i++){
             int j;
            string s;
            cin >> j >> s;
            pairs.push_back({j, s});
        }

        for(int i = 0; i < pairs.size(); i++)
        {
            pair<int, string> p = pairs[i];
            //cout << p .first << " "<< p.second << "\n";
            for(char c: p.second)
            {
                if(c == 'D')
                {
                    if(a[i] == 9)
                    {
                        a[i] = 0;
                    }
                    else
                    {
                        a[i] += 1;
                    }
                }
                else if(c == 'U')
                {
                    if(a[i] == 0)
                    {
                        a[i] = 9;
                    }
                    else
                    {
                        a[i] -= 1;
                    }
                }
            }
        }
         for(int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
