// Cho n, in ra chữ số cuối cùng của 1378^n.

#include <bits/stdc++.h>
using namespace std;

long long powMod(long long n)
{
    if (n == 0) {
        return 1;
    }
    long long res = 1;
    int a = 1378;
    while (n) {
        if (n % 2 == 1) {
            res *= a;
            res %= 10;
        }
        a *= a;
        a %= 10;
        n /= 2;
    }
    return res;
}

int main()
{
    long long n;
    cin >> n;
    cout << powMod(n) << endl;
    return 0;
}
