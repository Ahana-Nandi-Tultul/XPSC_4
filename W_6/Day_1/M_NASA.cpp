#include<bits/stdc++.h>
using namespace std;
const int maxN = (1 << 15);
vector<int> all_palindrome;
void mark_palindrome()
{
    for(int i = 0; i < maxN; i++)
    {
        string s = to_string(i);
        int len = s.length();
        bool ok = true;

        for(int i = 0; i < (len / 2); i++)
        {
            if(s[i] != s[len-i-1])
            {
                ok = false;
                break;
            }
        }

        if(ok)
        {
            all_palindrome.push_back(i);
        }
    }
}
int main()
{

    int t;
    cin >> t;
    mark_palindrome();
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> cnt(maxN), a;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
            cnt[x]++;
        }

        long long ans = n;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < all_palindrome.size(); j++)
            {
                int cur = a[i] ^ all_palindrome[j];
                ans += cnt[cur];
            }
        }

        cout << (ans / 2) << "\n";

    }
    return 0;
}
