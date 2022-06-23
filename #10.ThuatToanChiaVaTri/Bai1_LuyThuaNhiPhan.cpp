#include <bits/stdc++.h>
using namespace std;

const int MOD = (int)1e9 + 7;

long long powMod(int n, int k)
{
    if (k == 0) {
        return 1;
    }
    long long x = powMod(n, k / 2);
    if (k % 2 == 0) {
        return ((x % MOD) * (x % MOD) % MOD);
    } else {
        return (((x % MOD) * (x % MOD)) % MOD * (n % MOD)) % MOD;
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << powMod(n, k) << endl;
    return 0;
}