#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, s, cnt = 0;
    cin >> k >> s;
    for(int i = 0; i <= k; i++)
    {
        for(int j = 0; j <= k; j++)
        {
            int z = s - i - j;
            if(z >= 0 && z <= k)
            {
                cnt++;
            }
        }
    }
    cout << cnt << "\n";
    return 0;
}
