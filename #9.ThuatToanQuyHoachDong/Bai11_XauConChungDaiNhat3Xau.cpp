#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x, y, z;
    cin >> x >> y >> z;
    int n = x.size(), m = y.size(), l = z.size();
    x = "1" + x;
    y = "1" + y;
    z = "1" + z;
    int dp[n + 1][m + 1][l + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            for (int k = 1; k <= l; k++) {
                if (x[i] == y[j] && x[i] == z[k]) {
                    dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
                } else {
                    dp[i][j][k] = max({ dp[i - 1][j][k], dp[i][j - 1][k], dp[i][j][k - 1] });
                }
            }
        }
    }
    cout << dp[n][m][l] << endl;
    return 0;
}