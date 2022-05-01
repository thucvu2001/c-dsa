#include <bits/stdc++.h>
using namespace std;

int bs1(int a[], int l, int r, int x)
{
    int res = -1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] == x) {
            res = m;
            r = m - 1;
        } else if (a[m] < x) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return res;
}
int bs2(int a[], int l, int r, int x)
{
    int res = -1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] == x) {
            res = m;
            l = m + 1;
        } else if (a[m] < x) {
            l = m + 1;
        } else {
            r = m - 1;
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
        int m1 = bs1(a, i + 1, n - 1, k - a[i]);
        int m2 = bs2(a, i + 1, n - 1, k - a[i]);
        if (m1 != -1) {
            ans += (m2 - m1 + 1);
        }
    }
    cout << ans << endl;
    return 0;
}
