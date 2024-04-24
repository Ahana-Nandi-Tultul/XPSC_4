#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int And = -1;
        for(int i = 0; i < n; i++)
        {
            if((v[i] & k) == k)
            {
                And &= v[i];
            }
        }

        if(And == k) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }

    return 0;
}
