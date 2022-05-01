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
    string n;
    cin >> n;
    long long m;
    cin >> m;
    long long ans = 0;
    for (int i = 0; i < n.length(); i++) {
        ans = ans * 10 + n[i] - '0';
        ans %= m;
    }
    cout << gcd(ans, m) << endl;
    return 0;
}
