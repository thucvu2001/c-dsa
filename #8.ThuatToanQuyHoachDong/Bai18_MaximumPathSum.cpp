// Cho bảng A[] kích thước N x M (N hàng, M cột). Bạn được phép đi xuống dưới, đi sang phải và đi xuống ô chéo dưới về bên phải.
// Khi đi qua ô (i, j), điểm nhận được bằng A[i][j]. Hãy tìm đường đi từ ô (1, 1) tới ô (N, M) sao cho tổng điểm là lớn nhất.

#include <bits/stdc++.h>
using namespace std;

int dp[501][501];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> dp[i][j];
        }
    }
    for (int i = 2; i <= m; i++) {
        dp[1][i] += dp[1][i - 1];
    }
    for (int i = 2; i <= n; i++) {
        dp[i][1] += dp[i - 1][1];
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= m; j++) {
            dp[i][j] += max(dp[i - 1][j - 1], max(dp[i - 1][j], dp[i][j - 1]));
        }
    }
    cout << dp[n][m] << endl;
    return 0;
}