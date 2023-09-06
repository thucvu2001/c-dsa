#include <bits/stdc++.h>

using namespace std;

long long ext(long long a, long long b, long long& x, long long& y)
{
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }

    long long x1, y1;
    long long tmp = ext(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return tmp;
}

int main()
{
    long long a, b;
    cin >> a >> b;
    long long x, y;
    cout << ext(a, b, x, y) << endl; // ucln
    cout << x << " " << y << endl; // he so x y de: ax + by = gcd(a, b)
    return 0;
}