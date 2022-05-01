#include <bits/stdc++.h>
using namespace std;
bool check(long long n)
{
    for (int y = n / 111; y >= 0; y--) {
        int r = n - y * 111;
        if (r % 11 == 0) {
            return true;
        }
    }
    return false;
}
bool check2(long long n)
{
    int r = n % 111;
    if (r % 11 == 0) {
        return true;
    } else {
        return false;
    }
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
