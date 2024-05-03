#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        int n = s.size();

        char mn = min(s[0], s[n-1]);
        char mx = max(s[0], s[n-1]);
        vector<pair<char, int> > order;

        for(int i = 0; i <n; i++)
        {
            if(s[i] >= mn && s[i] <= mx)
            {
                order.push_back({s[i], i});
            }
        }

        sort(order.begin(), order.end(), [&](pair<char, int> a, pair<char, int> b)
        {
            return a.second < b.second;

        });

        if(order.size() > 2)
        {
            sort(order.begin()+1, order.begin() + order.size()-1, [&](pair<char, int> a, pair<char, int> b)
             {
                if(s[0] > s[n-1])
                {
                    return a.first > b.first;
                }
                return a.first < b.first;
             });
        }

        vector<int> sq;
        long long mv = 0;
        sq.push_back(1);

        for(int i = 1; i < order.size(); i++)
        {
            mv += abs(order[i-1].first - order[i].first);
            sq.push_back(order[i].second+1);
        }

        cout << mv << " " << sq.size() << "\n";
        for(int i : sq)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
