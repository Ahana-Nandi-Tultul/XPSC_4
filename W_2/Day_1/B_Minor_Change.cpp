#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    int i = 0, cnt= 0;
    while(t[i] != '\0')
    {
        if(t[i] != s[i])
        {
            cnt++;
        }
        i++;
    }
    cout << cnt << endl;
    return 0;
}
