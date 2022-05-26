// Ở bài toán này, bạn cần tìm kết quả của phép toán a^(b^c) % (1e9+7). Hãy cẩn thận vì b^c có thể rất lớn ! Chú ý 0^0=1

#include <bits/stdc++.h>
using namespace std;
const int MOD = (int)1e9 + 7;
long long powMod(long long a, long long b, long long c)
{
    long long res = 1;
    while (b != 0) {
        if (b % 2 == 1) {
            res *= a;
            res %= c;
        }
        a *= a;
        a %= c;
        b /= 2;
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        long long mu = powMod(b, c, MOD - 1);
        cout << powMod(a, mu, MOD) << endl;
    }
    return 0;
}
