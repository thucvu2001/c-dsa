#include <bits/stdc++.h>
using namespace std;

long long n, a[1001];
bool check;

void khoiTao()
{
    for (int i = 1; i <= n; i++) {
        a[i] = 0;
    }
}

void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 1) {
        a[i] = 0;
        i--;
    }
    if (i == 0) {
        check = false;
    } else {
        a[i] = 1;
    }
}

int main()
{
    long long res = INT_MAX;
    cin >> n;
    int x[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> x[i];
    }
    khoiTao();
    check = true;
    while (check) {
        long long ben1 = 0;
        long long ben2 = 0;
        for (int i = 1; i <= n; i++) {
            if (a[i] == 0) {
                ben1 += x[i];
            } else {
                ben2 += x[i];
            }
        }
        res = min(res, abs(ben1 - ben2));
        sinh();
    }
    cout << res << endl;
    return 0;
}