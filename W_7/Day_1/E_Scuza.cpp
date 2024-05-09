#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> vn(n), vq(q);

        for (int i = 0; i < n; i++) {
            cin >> vn[i];
        }

        for (int i = 0; i < q; i++) {
            cin >> vq[i];
        }

        for (int i = 0; i < q; i++) {
            long long int s = 0;
            for(int j = 0; j < n; j++)
            {
                if(vn[j] > vq[i])
                {
                    break;
                }
                else
                {
                    s += vn[j];
                }
            }

            cout << s<< " ";
        }

        cout << "\n";
    }

    return 0;
}
