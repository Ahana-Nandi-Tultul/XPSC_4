#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);

        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int mx = v[0], mn = v[0];
        for(int i = 1; i < n; i++)
        {
            mx |= v[i];
            mn &= v[i];
        }

        cout << mx - mn << endl;
    }
    return 0;
}
