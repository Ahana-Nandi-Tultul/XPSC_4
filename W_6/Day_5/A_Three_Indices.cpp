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
        vector<int> v(n);

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int i = 0, x = 0, y = 0, z = 0;
        bool ans = false;
        while(i < (n -2))
        {
            if((v[i] < v[i+1]) && (v[i+1] > v[i+2]))
            {
                x = (i+1);
                y = (i+1+1);
                z = (i+2+1);

                ans = true;
                i+=3;
                break;
            }
            else
            {
                i++;
            }
        }
        if(ans)
        {
            cout << "YES" << "\n";
            cout << x << " " << y << " " << z << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}
