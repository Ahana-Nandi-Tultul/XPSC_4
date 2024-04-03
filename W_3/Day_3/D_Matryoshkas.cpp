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
        vector<int> v(n);
        map<int, int> mp;
        set<int> st;
        for(int i = 0; i < n; i++)
        {
            cin>> v[i];
            mp[v[i]]++;
            st.insert(v[i]);
        }
        sort(v.begin(), v.end());
        int cnt = 1;
        for (set<int>::iterator it = st.begin(); it != st.end(); ++it)
        {
            if(*(it+1) - *it != 0)
            {
                cnt++;
            }
        }

    }
    return 0;
}
