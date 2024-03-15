#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if(s.length() < 4)
    {
        while(s.length() != 4)
        {
            s = '0' + s;
        }
        cout << s << '\n';
    }
    else
    {
        cout << s << '\n';
    }
    return 0;
}
