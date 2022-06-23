// Mọi số nguyên dương N đều có thể phân tích thành tổng các bình phương của các số nhỏ hơn N.
// Ví dụ số 100 = 10^2 hoặc 100 = 5^2 + 5^2 + 5^2 + 5^2.
// Cho số nguyên dương N. Nhiệm vụ của bạn là tìm số lượng ít nhất các số nhỏ hơn N mà có tổng bình phương bằng N.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int dp[10001];
    int n;
    cin >> n;
    for (int i = 0; i <= 10000; i++) {
        dp[i] = i;
    }
    for (int i = 1; i <= 10000; i++) {
        for (int j = 1; j <= sqrt(i); j++) {
            dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
    }
    cout << dp[n] << endl;
    return 0;
}