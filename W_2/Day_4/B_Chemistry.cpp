#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cin.ignore();
        string s;
        cin >> s;

        int l = 0, r = n-1;
        bool f = true;
        while(l < r)
        {
            if(s[l] != s[r])
            {
                f=false;
                break;
            }
            ++l;
            --r;
        }
        if(f)
        {
            cout << "YES" << "\n";
            continue;
        }
        if(l >= r)
        {
            cout << "YES" << "\n";
            continue;
        }
        map<char, int> mp
        for(int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        for(auto& it: mp)
        {
            char f = it.first;
            vector<char> v;
            for(int i = 0; i < n; i++)
            {
                if(s[i] != f)
                {
                    v.push_back(s[i]);
                }

                int s = 0, e = v.size()-1;
                bool pal
                while(s < e)
                {
                    if(v[s] != v[e])
                    {

                    }
                }
            }
        }


    }
    return 0;
}
