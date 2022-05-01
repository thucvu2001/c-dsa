#include <bits/stdc++.h>
using namespace std;

const int MOD = (int)1e9 + 7;

long long mod(string s, long long m)
{
    long long ans = 0;
    for (char x : s) {
        ans = ans * 10 + x - '0';
        ans %= m;
    }
    return ans;
}

long long powMod(long long a, long long b, long long c)
{
    long long res = 1;
    while (b) {
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
    string s;
    cin >> s;
    long long m;
    cin >> m;
    long long ans = mod(s, MOD);
    cout << powMod(ans, m, MOD) << endl;
    return 0;
}
