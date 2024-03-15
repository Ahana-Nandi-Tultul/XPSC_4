#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int a[26];
    for(int i = 0; i < 26 ; i++)
    {
        a[i] = 0;
    }
    for(char c : s)
    {
        a[c-'a']++;
    }
    char b = '1';
    for(int i = 0; i < 26; i++)
    {
        //cout << (char)(i+'a') << " - "<< a[i] << endl;
        if(a[i] == 0)
        {
             b = (char)(i+'a');
             break;
        }
    }
    if(b == '1')
    {
        cout << "None" << '\n';
    }
    else
    {
        cout << b << '\n';
    }
    return 0;
}
