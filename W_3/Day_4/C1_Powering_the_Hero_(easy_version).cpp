#include<bits/stdc++.h>
using namespace std;
class Cmp {
public:
    bool operator()(int a, int b) {
        return a < b;
    }
};

int main() {
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

        long long int p = 0;
        priority_queue<int, vector<int>, Cmp> b;

        for(int i = 0; i < n; i++)
        {
            if(v[i] == 0)
            {
                if(!b.empty())
                {
                    p += b.top();
                    b.pop();
                }
            }
            else
            {
                b.push(v[i]);
            }
        }
        cout << p << endl;
    }
    return 0;
}
