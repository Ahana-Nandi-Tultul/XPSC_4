#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    int a[n1], b[n2];

    for(int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }

    int l = 0, r = 0, cnt = 0;
    while(r!=n2)
    {
        while(b[r] > a[l])
        {
            l++;
            cnt++;
        }
        cout << cnt << " ";
        r++;
    }
    return 0;
}
