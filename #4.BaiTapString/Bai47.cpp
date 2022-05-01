#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    long long a, x, y;
    cin >> a >> x >> y;
    long long z = gcd(x, y);
    for (int i = 1; i <= z; i++) {
        cout << a;
    }
    return 0;
}
