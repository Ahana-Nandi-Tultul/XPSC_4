#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int zo = 0, on = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '0') zo++;
            else if(s[i] == '1') on++;
        }

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '0')
            {
                if(on > 0) on--;
                else break;
            }
            else
            {
                if(zo > 0) zo--;
                else break;
            }
        }

        cout << on + zo << "\n";
    }
    return 0;
}
