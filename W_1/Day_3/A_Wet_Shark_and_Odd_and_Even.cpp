#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    long long int sum = 0;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
        sum += (1ll * a[i]);
    }
    if (sum % 2 == 0)
    {
        cout << sum  << "\n";
        return 0;
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++)
    {
        if((sum % 2) != 0 && ((a[i] % 2) != 0))
        {
            sum -= a[i];
        }
        else if((sum % 2) == 0)
        {
            break;
        }
    }
    cout << sum << "\n";
    return 0;
}
