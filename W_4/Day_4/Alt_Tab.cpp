#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> v;
    unordered_set<string> seen;

    for(int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        v.push_back(x);
    }

    vector<string> unique;
    for (int i = n - 1; i >= 0; i--)
    {
        if (seen.find(v[i]) == seen.end())
        {
            seen.insert(v[i]);
            unique.push_back(v[i]);
        }
    }

    //reverse(unique.begin(), unique.end(), greater<string>());
    string st;
    for (const auto& elem : unique) {
        char st1 = elem[elem.length() - 2];
        char st2 = elem[elem.length() - 1];
        string s3(1, st1);
        s3 += st2;
        st += s3;
    }
    cout << st << "\n";

    return 0;
}
