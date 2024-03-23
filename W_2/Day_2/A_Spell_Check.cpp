#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cin.ignore();
        string s;
        cin >> s;
        int cnt[26];

        for(char c: s)
        {
            if(c == 'T')
            {
                cnt['t' - 'a']++;
            }
            else if(c != 't')
            {
                cnt[c - 'a']++;
            }
        }

        bool ans = true;

        for(char c: 'Timur')
        {
            if(cnt[c-'a'] != 1)
            {
                ans = false;
            }
        }

        if(ans)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}
