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
        vector<int> pr(n);

        for(int i = 0; i < n; i++)
        {
            pr[i] = i + 1;
        }

        for (int i = 2; i < n; i++)
        {
            if ((pr[i - 2] | pr[i - 1]) == pr[i])
            {
                swap(pr[i], pr[i-1]);
            }
        }

        for (int nm : pr)
        {
            cout << nm << " ";
        }
        cout << endl;
    }
    return 0;
}
