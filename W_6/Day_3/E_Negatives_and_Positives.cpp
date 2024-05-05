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
        vector<int> pos, neg;
        vector<int> all;
        int z = 0;

        long long int sum = 0;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if(x > 0)
            {
                pos.push_back(x);
                all.push_back(abs(x));
            }
            else if(x < 0)
            {
                neg.push_back(x);
                all.push_back(abs(x));
            }
            else if(x == 0)
            {
                z++;
            }

            sum += abs(x);
        }


        sort(all.begin(), all.end());
        if(((neg.size() % 2) != 0) && z == 0)
        {
            cout << (sum - all[0] - all[0]) << "\n";
        }
        else
        {
            cout << sum << "\n";
        }

    }
    return 0;
}

