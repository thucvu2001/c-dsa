// Cho 2 số nguyên dương a và m, trong đó m = 1000000007, hãy tìm số nguyên dương b nhỏ nhất thỏa mãn a * b % m = 1.
#include <bits/stdc++.h>
using namespace std;
const int MOD = (int)1e9 + 7;
long long powMod(long long a, long long b, long long c)
{
    long long ans = 1;
    while (b != 0) {
        if (b % 2 == 1) {
            ans *= a;
            ans %= c;
        }
        a *= a;
        a %= c;
        b /= 2;
    }
    return ans;
}
long long inv(long long a, long long m)
{
    return powMod(a, m - 2, m);
}
int main()
{
    long long a;
    cin >> a;
    cout << inv(a, MOD) << endl;
    return 0;
}
