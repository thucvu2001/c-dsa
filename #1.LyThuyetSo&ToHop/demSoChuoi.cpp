#include <bits/stdc++.h>
using namespace std;
const int MOD = (int)1e9 + 7;
long long fac[1000001];
long long powMod(long long a, long long b, long long c)
{
    long long res = 1;
    while (b != 0) {
        if (b % 2 == 1) {
            res *= a;
            res %= c;
        }
        a *= a;
        a %= MOD;
        b /= 2;
    }
    return res;
}
long long inv(long long a, long long m)
{
    return powMod(a, m - 2, m);
}
int main()
{
    string s;
    cin >> s;
    map<char, int> mp;
    int n = s.size();
    for (char c : s) {
        mp[c]++;
    }
    fac[0] = 1;
    for (int i = 1; i <= 1000000; i++) {
        fac[i] = i * fac[i - 1];
        fac[i] %= MOD;
    }
    long long ans = fac[n];
    for (auto it : mp) {
        int k = it.second;
        ans *= inv(fac[k], MOD);
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}
