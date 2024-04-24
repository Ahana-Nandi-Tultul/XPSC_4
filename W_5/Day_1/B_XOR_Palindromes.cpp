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
        string s; cin >> s;

        int unmatched = 0, matched = 0;
        int l = 0, r = (n-1);

        while(l < r)
        {
            if(s[l] == s[r]) matched += 2;
            else unmatched++;

            l++; r--;
        }

        vector<char> ans;
        for(int i = 0; i <= n; i++)
        {
            int tl = i;
            tl -= unmatched;

            if(tl < 0)
            {
                ans.push_back('0');
                continue;
            }

            tl = max((tl%2), tl-matched);
            tl = max(0, tl-(n%2));

            if(tl == 0)
            {
                ans.push_back('1');
            }
            else
            {
                ans.push_back('0');
            }
        }
        for(int i = 0; i < ans.size(); i++)
        {
            cout << ans[i];
        }
        cout << "\n";
    }
    return 0;
}
