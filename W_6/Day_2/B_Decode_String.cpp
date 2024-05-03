#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            v[i] = (int)(s[i] - '0');
        }

        string s1;
        for(int i = (n-1); i >= 0;) {
            if(v[i] == 0) {
                int x = v[i-2] * 10 + v[i-1];
                char c = char((x - 1) + 'a');
                s1 += c;
                i -= 3;
            }
            else {
                char c = char((v[i] - 1) + 'a');
                s1 += c;
                i--;
            }
        }

        for(int i = s1.length() -1; i >= 0; i-- )
        {
            cout << s1[i];
        }
        cout << endl; // Add a newline after printing each test case
    }
    return 0;
}
