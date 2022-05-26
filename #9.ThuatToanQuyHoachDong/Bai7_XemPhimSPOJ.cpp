#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main()
{
    int s, n;
    cin >> s >> n;
    int dp[n + 2][s + 2];
    int a[n + 2];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    memset(dp, 0, sizeof(dp));
    int res = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= s; j++) {
            if (j < a[i]) {
                dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - a[i]] + a[i]);
            }
            res = max(res, dp[i][j]);
        }
    }
    cout << dp[n][s] << endl;
    return 0;
}