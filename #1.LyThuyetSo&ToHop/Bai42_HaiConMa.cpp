// Đếm số cách đặt 2 con mã trên bàn cờ vua cỡ k × k với k = 1, 2, 3, ..n sao cho chúng không ăn nhau, 2 con mã này được coi là giống nhau.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        long long ans = 1ll * i * i * (i * i - 1) / 2 - 4 * (i - 1) * (i - 2);
        cout << ans << endl;
    }
    return 0;
}
