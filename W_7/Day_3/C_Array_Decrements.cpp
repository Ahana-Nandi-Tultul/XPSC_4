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
        vector<int>a(n), b(n);

        for(int i = 0; i <n; i++)
        {
            cin >> a[i];
        }

        for(int i = 0; i <n; i++)
        {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        bool ans = true;
        for(int i = 0; i <n; i++)
        {
            if(b[i] > a[i])
            {
                ans = false;
                break;
            }
        }

        if(ans)
        {
            int mna =INT_MAX, mxa= INT_MIN, mnb = INT_MAX, mxb = INT_MIN;
            for(int i = 0; i < n; i++)
            {
                if(a[i] > mxa && a[i] != 0) mxa = a[i];
                if(a[i] < mna && a[i] != 0) mna = a[i];
                if(b[i] > mxb && b[i] != 0) mxb = b[i];
                if(b[i] < mnb && b[i] != 0) mnb = b[i];
            }
            cout << mxa << " " << mna << " " << mxb << " " << mnb << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
