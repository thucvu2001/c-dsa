// tinh a^(b^c) % (1e9 + 7);
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
