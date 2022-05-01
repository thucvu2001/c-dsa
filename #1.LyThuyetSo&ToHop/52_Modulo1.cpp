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

void inv(long long a, long long m)
{
    long long x, y;
    long long d = ext(a, m, x, y);
    if (d != 1) {
        cout << "-1\n";
    } else {
        cout << (x % m + m) % m << endl;
    }
}

int main()
{
    long long a, b;
    cin >> a >> b;
    inv(a, b);
}
