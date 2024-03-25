#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const vector<int>& v,int n, int x) {
    vector<int> tmp;
    for(int i = 0; i < n; i++)
    {
        if(v[i] != v[x])
        {
            tmp.push_back(v[i]);
        }
    }
    int l = 0, r = tmp.size()-1;
    while (l < r) {
        if (tmp[l] != tmp[r]) {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int l = 0, r = n-1;
        bool f = true;
        while(l < r)
        {
            if(v[l] != v[r])
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
        if(isPalindrome(v, n, l))
        {
            cout << "YES" << "\n";
        }
        else if(isPalindrome(v, n, r))
        {
             cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }

    }
    return 0;
}
