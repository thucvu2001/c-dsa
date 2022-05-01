#include <bits/stdc++.h>
using namespace std;

long long ext(long long a, long long b, long long& x, long long& y)
{
    if (b == 0) {
        x = 1;
        y = 0;
        return a; // a = g;
    }
    long long x1, y1;
    long long tmp = ext(b, a % b, x1, y1);
    x = y1;
    y = x1 - a / b * y1;
    return tmp;
}

int main()
{
    long long m, n, p;
    cin >> m >> n >> p;
    long long x, y;
    ext(m, n, x, y);
    if ((x + y) % 2) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
    return 0;
}
