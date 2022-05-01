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
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    for (int i = 0; i < n; i++) {
        int tmp = bs(b, 0, n - 1, a[i]);
        if (tmp != -1) {
            cout << b[tmp] << " ";
        } else {
            cout << "_ ";
        }
    }
    return 0;
}
