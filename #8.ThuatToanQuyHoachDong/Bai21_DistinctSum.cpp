// Cho mảng A[] gồm N phần tử là số nguyên dương, xét tất cả các tập con của A[] và tính tổng các phần tử trong tập này (bao gồm cả tập rỗng),
// sau đó liệt kê các tổng khác nhau có thể tạo thành theo thứ tự tăng dần.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    bool dp[sum + 1];
    memset(dp, false, sizeof(dp));
    dp[0] = true;
    for (int i = 1; i <= n; i++) {
        for (int j = sum; j >= a[i]; j--) {
            if (dp[j - a[i]]) {
                dp[j] = true;
            }
        }
    }
    for (int i = 0; i <= sum; i++) {
        if (dp[i]) {
            cout << i << " ";
        }
    }
    return 0;
}