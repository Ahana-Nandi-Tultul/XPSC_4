#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> vn(n), vq;

        for(int i = 0; i < n; i++)
        {
            cin >> vn[i];
        }
        for(int i = 0; i < q; i++)
        {
            int x;
            cin>> x;
            if(vq.empty() || vq.back() > x)
            {
                vq.push_back(x);
            }
        }
        for(int i = 0; i < n; i++)
        {
            for(int j: vq)
            {
                if(vn[i] % (1 << j) == 0)
                {
                    j = j -1;
                    vn[i] = vn[i] + (1 << j);
                }
            }
        }

        for(int i = 0; i < n; i++)
        {
            cout << vn[i] << " ";
        }
        cout << endl;

    }
    return 0;
}
