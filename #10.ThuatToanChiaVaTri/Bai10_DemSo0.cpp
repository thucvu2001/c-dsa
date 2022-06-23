#include <bits/stdc++.h>
using namespace std;

int last_pos(int a[], int l, int r, int res)
{
    if (l > r) {
        return res;
    }
    int m = (l + r) / 2;
    if (a[m] == 0) {
        res = m;
        return last_pos(a, m + 1, r, res);
    } else {
        return last_pos(a, l, m - 1, res);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << last_pos(a, 0, n - 1, -1) + 1 << endl;
    return 0;
}