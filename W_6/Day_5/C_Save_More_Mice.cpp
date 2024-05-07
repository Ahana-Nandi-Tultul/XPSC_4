#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(k);

        for(int i = 0; i < k; i++)
        {
            cin >> v[i];
        }
        int m_k = n;
        //cout << m_k << " ";
        sort(v.begin(), v.end(), greater<int>());

        int cnt = 0;
        for(int i = 0; i < n; i++)
        {
            int need = (n - v[i]);
            //cout << v[i] << " ";
            m_k -= need;
            if(v[i] == cnt || m_k <= 0)
            {
                break;
            }
            cnt++;
        }

        cout << cnt << "\n";
    }
    return 0;
}
