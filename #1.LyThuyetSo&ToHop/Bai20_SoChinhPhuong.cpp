#include <bits/stdc++.h>
using namespace std;

bool check(long long n)
{
    int can = sqrt(n);
    if (1ll * can * can == n) {
        return true;
    }
    return false;
}

int main()
{
    long long n;
    cin >> n;
    if (check(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
