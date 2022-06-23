// Cho số nguyên dương N, gọi M là số đảo của N. Hãy tính lũy thừa với cơ số N và số mũ M và chia dư kết quả cho 10^9 + 7
#include <bits/stdc++.h>
using namespace std;

const int MOD = (int)1e9 + 7;

long long powMod(long long n, long long m)
{
    long long res = 1;
    while (m) {
        if (m % 2 == 1) {
            res *= n;
            res %= MOD;
        }
        n *= n;
        n %= MOD;
        m /= 2;
    }
    return res;
}

int main()
{
    string n;
    cin >> n;
    string m = n;
    reverse(m.begin(), m.end());
    cout << powMod(stoll(n), stoll(m)) << endl;
    return 0;
}