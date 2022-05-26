#include <bits/stdc++.h>
using namespace std;

const int MOD = (int)1e9 + 7;

int main()
{
    ios::sync_with_stdio(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 6; j++) {
            if (i >= j) {
                dp[i] += dp[i - j];
                dp[i] %= MOD;
            }
        }
    }
    cout << dp[n] << endl;
    return 0;
}