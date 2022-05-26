// Một chiếc cầu thang có N bậc. Mỗi bước, bạn được phép bước lên trên tối đa K bước. Hỏi có tất cả bao nhiêu cách bước để đi hết cầu thang? (Tổng số bước đúng bằng N).

#include <bits/stdc++.h>
using namespace std;

const int MOD = (int)1e9 + 7;

int main()
{
    int n, k;
    cin >> n >> k;
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= min(i, k); j++) {
            dp[i] += dp[i - j];
            dp[i] %= MOD;
        }
    }
    cout << dp[n] << endl;
    return 0;
}