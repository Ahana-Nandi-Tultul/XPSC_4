#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        map<int,int> a, b;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if(a[x] == 0)
            {
                a[x] = (i+1);
            }
            else
            {
                b[x] = (i+1);
            }
        }

        while (k--) {
            int x, y;
            cin >> x >> y;

            if (a[x] == 0 || a[y] == 0)
            {
                cout << "NO" << endl;
            }
            else {
                if (b[y] == 0)
                {
                    if (a[x] < a[y])
                    {
                        cout << "YES" << endl;
                    }
                    else
                    {
                         cout << "NO" << endl;
                    }
                }
                else
                {
                    if (a[x] < b[y])
                    {
                          cout << "YES" << endl;
                    }
                    else
                    {
                        cout << "NO" << endl;
                    }
                }
            }

        }
    }

    return 0;
}
