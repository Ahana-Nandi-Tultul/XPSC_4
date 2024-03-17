#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int a, b;
    cin >> a >> b;
    long long int cnt = 1;
    if (a > b) {
        cout << "0\n";
        return 0;
    }
    while (a * 2 <= b) {
        a = a * 2;
        cnt++;
    }
    cout << cnt << '\n';
    return 0;
}
