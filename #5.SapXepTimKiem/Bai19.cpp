#include <bits/stdc++.h>
using namespace std;

int bs(int a[], int l, int r, int x)
{
    int res = -1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] > x) {
            res = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    return res;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int& x : a)
        cin >> x;
    sort(a, a + n);
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        int x = bs(a, i + 1, n - 1, k - a[i]);
        if (x != -1) {
            ans += (n - x);
        }
    }
    cout << ans << endl;
    return 0;
}
