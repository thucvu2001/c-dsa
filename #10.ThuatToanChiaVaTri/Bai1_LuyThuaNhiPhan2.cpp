// Luy thua nhi phan su dung vong lap
// tinh a ^ b % (1e9 + 7);

#include <bits/stdc++.h>
using namespace std;

const int MOD = (int)1e9 + 7;

long long powMod(int a, int b)
{
    long long res = 1;
    while (b) {
        if (b % 2 == 1) {
            res *= a;
            res %= MOD;
        }
        a *= a;
        a %= MOD;
        b /= 2;
    }
    return res;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << powMod(a, b) << endl;
    return 0;
}