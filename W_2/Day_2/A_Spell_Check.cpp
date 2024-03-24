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
        int cnt[26] = {0};
        bool ans = true;

        for(char c: s)
        {
            if(isalpha(c))
            {
                if(c == 'T')
                {
                    cnt['t' - 'a']++;
                }
                else if((c != 't')  && c >= 'a' && c <= 'z')
                {
                    cnt[c - 'a']++;
                }
                else
                {
                    ans = false;
                }
            }
            else
            {
                ans = false;
            }
        }
        if (n != 5) {
            cout << "NO" << "\n";
            continue;
        }
        if(!ans)
        {
            cout << "NO" << "\n";
            continue;
        }
        for(char c : "timur")
        {
            if(c != '\0')
            {
                if(cnt[c- 'a'] != 1)
                {
                    //cout << c << endl;
                    ans = false;
                    break;
                }
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
