// Một con ếch có thể nhảy 1, 2, 3 bước để có thể lên đến một đỉnh cần đến. Hãy đếm số các cách con ếch có thể nhảy đến đỉnh.

#include <bits/stdc++.h>
using namespace std;

const int MOD = (int)1e9 + 7;

int main()
{
    int n, k;
    cin >> n >> k;
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (int i = 4; i <= n; i++) {
        dp[i] += dp[i - 1] + dp[i - 2] + dp[i - 3];
        dp[i] %= MOD;
    }
    cout << dp[n] << endl;
    return 0;
}