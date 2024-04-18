#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        char l_s1 = s1[(s1.length() - 1)], l_s2 = s2[(s2.length() - 1)];
        int cnt_x1 = (s1.length() - 2), cnt_x2 = (s2.length() - 2);

        if(l_s1 == 'S' && l_s2 == 'M')
        {
            cout << '<' << "\n";
        }
        else if(l_s1 == 'S' && l_s2 == 'L')
        {
            cout << '<' << "\n";
        }
        else if(l_s1 == 'L' && l_s2 == 'M')
        {
            cout << '>' << "\n";
        }
        else if(l_s1 == 'L' && l_s2 == 'S')
        {
            cout << '>' << "\n";
        }
        else if(l_s1 == 'M' && l_s2 == 'S')
        {
            cout << '>' << "\n";
        }
        else if(l_s1 == 'M' && l_s2 == 'L')
        {
            cout << '<' << "\n";
        }
        else if(l_s1 == 'S' && l_s2 == 'S')
        {
            if(cnt_x1 > cnt_x2)
            {
                cout << '<' << "\n";
            }
            else if(cnt_x2 == cnt_x1)
            {
                cout << '=' << "\n";
            }
            else
            {
                cout << '>' << "\n";
            }
        }
        else if(l_s1 == 'M' && l_s2 == 'M')
        {
            if(cnt_x1 > cnt_x2)
            {
                cout << '<' << "\n";
            }
            else if(cnt_x2 == cnt_x1)
            {
                cout << '=' << "\n";
            }
            else
            {
                cout << '>' << "\n";
            }
        }
        else if(l_s1 == 'L' && l_s2 == 'L')
        {
            if(cnt_x1 > cnt_x2)
            {
                cout << '>' << "\n";
            }
            else if(cnt_x2 == cnt_x1)
            {
                cout << '=' << "\n";
            }
            else
            {
                cout << '<' << "\n";
            }
        }
    }
    return 0;
}
