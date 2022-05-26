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
    long long a, b;
    cin >> a >> b;
    for (long long i = a; i <= b; i++) {
        for (long long j = i + 1; j <= b; j++) {
            if (gcd(i, j) == 1) {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }
    return 0;
}
