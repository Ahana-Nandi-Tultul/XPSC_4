#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >> n;
        string s1;
        cin >> s1;

        int ans = 1e9;
        for(char ch = 'a'; ch <= 'z'; ch++)
        {
            int cnt = 0;
            int l = 0, r = (n - 1);
            while(l < r)
            {
                if(s1[l] != s1[r])
                {
                    if(s1[l] == ch)
                    {
                        l++;
                        cnt++;
                    }
                    else if(s1[r] == ch)
                    {
                        r--;
                        cnt++;
                    }
                    else
                    {
                        cnt = 1e9;
                        break;
                    }
                }
                else{
                    l++;
                    r--;
                }
            }
            ans = min(ans, cnt);
        }

        if(ans == 1e9)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << ans << "\n";
        }
    }
    return 0;
}
