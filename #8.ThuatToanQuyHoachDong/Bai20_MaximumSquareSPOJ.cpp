// Bạn được cung cấp một ma trận nhị phân có N dòng và M cột chỉ bao gồm các số 0 và 1, hãy tìm hình vuông lớn nhất trong ma trận mà chỉ chứa toàn số 1.
#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int main()
{
    int a[501][501];
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    int res = (int)-1e9;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i == 1 || j == 1) {
                dp[i][j] = a[i][j];
            } else {
                if (a[i][j] == 1) {
                    dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
                } else {
                    dp[i][j] = 0;
                }
            }
            res = max(res, dp[i][j]);
        }
    }
    cout << res << endl;
    return 0;
}