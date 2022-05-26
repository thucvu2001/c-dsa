#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    s = "a" + s;
    int n = s.length();
    t = "a" + t;
    int m = t.length();
    int dp[n + 1][m + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (s[i] == t[j]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    cout << dp[n - 1][m - 1];
    return 0;
}