#include <iostream>
#include <string>

using namespace std;

string longestCommonSubstring(string s1, string s2) {
    int m = s1.length();
    int n = s2.length();

    int dp[m + 1][n + 1];
    int maxLength = 0;
    int endIndex = 0;

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > maxLength) {
                    maxLength = dp[i][j];
                    endIndex = i - 1;
                }
            } else {
                dp[i][j] = 0;
            }
        }
    }

    return s1.substr(endIndex - maxLength + 1, maxLength);
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {

        string s1, s2;
        cin >> s1 >> s2;
        string commonSubstring = longestCommonSubstring(s1, s2);

        int m = s1.length();
        int n = s2.length();

        int sl = commonSubstring.length();

        cout << ((m - sl) + (n - sl)) << "\n";

    }
    return 0;
}
