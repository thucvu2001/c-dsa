// Kiểm tra xem một số có số lượng ước số của nó là số lẻ.

#include <bits/stdc++.h>
using namespace std;

bool chinhPhuong(long long n)
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
    if (chinhPhuong(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
