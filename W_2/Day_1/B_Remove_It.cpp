#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, s;
    cin >> n >> s;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(x != s)
        {
            v.push_back(x);
        }
    }
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
