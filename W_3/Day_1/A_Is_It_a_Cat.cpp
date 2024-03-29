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

        int l = 0;
        bool ans = false;
        if(s[l] == 'M' || s[l] == 'm' )
        {
            while(s[l] == 'M' || s[l] == 'm' && l < n)
            {
                l++;
            }
            //cout << s[l] << "\n";
            if(s[l] == 'e' || s[l] == 'E')
            {
                while(s[l] == 'e' || s[l] == 'E' && l < n)
                {
                    l++;
                }
                //cout << s[l] << "\n";
                if(s[l] == 'o' || s[l] == 'O')
                {
                    while(s[l] == 'o' || s[l] == 'O' && l < n)
                    {
                        l++;
                    }
                    //cout << s[l] << "\n";
                     if(s[l] == 'w' || s[l] == 'W')
                    {
                        while(s[l] == 'w' || s[l] == 'W' && l < n)
                        {
                            l++;
                        }
                        //cout << s[l] << "\n";
                        if(s[l] == '\0')
                        {
                            ans = true;
                        }

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
            else
            {
                ans = false;
            }
        }
        else
        {
            ans = false;
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
