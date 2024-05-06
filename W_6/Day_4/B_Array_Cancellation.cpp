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

        long long int s = 0, p = 0, k;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            s = s + x;
            if(s < 0)
            {
                k = (-1)*s;
                if(k > p) p = k;
            }
        }

        cout << p << "\n";
    }
    return 0;
}
