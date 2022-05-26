// Tính a ^ b % 1000000007 với a, b nguyên không âm.

#include <bits/stdc++.h>
using namespace std;

const int MOD = (int)1e9 + 7;
long long pow(long long a, long long b)
{
    if (a == 0) {
        return 0;
    }
    if (b == 0) {
        return 1;
    }
    long long res = 1;
    a %= MOD;
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
    long long a, b;
    cin >> a >> b;
    cout << pow(a, b) << endl;
    return 0;
}
