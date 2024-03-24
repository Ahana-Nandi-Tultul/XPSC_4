#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        cin.ignore();
        vector<string> v;
        for(int i = 0; i < a; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        int sum = 0, ans ;
        for(int i = 0; i < (a - 1); i++)
        {
            string s1 = v[i];
            for(int j = i+1; j < a; j++)
            {
                string s2 = v[j];
                sum = 0;
                for(int k = 0; k < b; k++)
                {
                    sum += abs(s1[k] - s2[k]);
                    //cout << s1[k] << " " << s2[k] << " " << sum << endl;
                }
                if(i == 0 && j == 1)
                {
                    ans = sum;
                }
                else
                {
                    ans = min(ans, sum);
                }
                //cout << s1 << " " << s2 << " " << sum << " "<< ans << endl;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
