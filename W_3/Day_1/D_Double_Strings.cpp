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
        unordered_set<string> ss;
        vector<string> v(n);

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            ss.insert(v[i]);
        }

        string s1;
        for (int i = 0; i < n; i++)
        {
            bool found = false;
            for (int j = 1; j < v[i].size() && !found; j++)
            {
                string a = v[i].substr(0, j);
                string b = v[i].substr(j);
                if (ss.find(a) != ss.end() && ss.find(b) != ss.end())
                {
                    found = true;
                }
            }
            s1 += (found ? '1' : '0');
        }
        cout << s1 << "\n";
    }
    return 0;
}
