#include <iostream>
#include <cmath>
using namespace std;

int MSB(int x) {
    if (x == 0) return 0;
    int msb = 0;
    while (x >>= 1) {
        msb++;
    }
    return msb;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n == 2) {
            cout << 0 << " " << 1 << "\n";
            continue;
        }

        int c = n - 1;
        while(c > 1) {
            cout << c << " ";
            if(MSB(c) > MSB(c - 1)) {
                break;
            }
            c--;
        }

        for(int i = 0; i < c; i++) {
            cout << i << " ";
        }

        cout << "\n";
    }
    return 0;
}

