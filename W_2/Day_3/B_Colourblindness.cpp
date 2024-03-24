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
        string s1, s2;
        cin >> s1 >> s2;

        int i = 0;
        bool ans = false;
        while(s1[i] != '\0')
        {
            if(s1[i] == 'R' && s2[i] != 'R')
            {
                ans = true;
                break;
            }
            else if(s1[i] != 'R' && s2[i] == 'R')
            {
                ans = true;
                break;
            }
            i++;
        }
        if(ans)
        {
            cout << "NO" << "\n";
        }
        else
        {
            cout << "YES" << "\n";
        }
    }

    return 0;
}
