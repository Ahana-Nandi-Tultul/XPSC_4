#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int a, b;
    cin >> a >> b;
    long long int cnt = 0, i = 1;

    // Check if a is initially greater than b
    if (a > b) {
        cout << "0\n"; // If a > b, no solution exists
        return 0;
    }

    while (true) {
        if (a =< b) {
            cnt++;
            a = a  * cnt;
        }
        else

    }

    cout << cnt << '\n';
    return 0;
}
