// Cho mê cung được mô tả bởi một ma trận kí tự gồm N hàng và N cột.
// Mỗi ô trên ma trận chứa kí tự '.' tương ứng với đường đi và dấu * tương ứng với bẫy.
// Một con chuột muốn đi từ ô (1, 1) tới ô (N, N) và chỉ được di chuyển khi một ô nào đó là đường đi và nó được di chuyển sang phải hoặc xuống dưới.
// Hãy đếm số cách con chuột có thể di chuyển tới đích. Vì kết quả quá lớn nên hãy lấy dư với 10^9 + 7
// 4
// ....
// .*..
// ...*
// *...
// output: 3

#include <bits/stdc++.h>
using namespace std;

const int MOD = (int)1e9 + 7;
char a[1001][1001];
int dp[1001][1001];
int main()
{
    dp[1][0] = dp[0][1] = 1;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] == '.') {
                if (i == 1) {
                    dp[i][j] = dp[i][j - 1];
                } else if (j == 1) {
                    dp[i][j] = dp[i - 1][j];
                } else {
                    dp[i][j] += dp[i - 1][j] + dp[i][j - 1];
                }
                dp[i][j] %= MOD;
            }
        }
    }
    cout << dp[n][n] << endl;
    return 0;
}