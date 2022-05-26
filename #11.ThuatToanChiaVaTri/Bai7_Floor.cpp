#include <bits/stdc++.h>
using namespace std;

int first_pos(int a[], int l, int r, int x, int ans)
{
    if (l > r) {
        return ans;
    }
    int m = (l + r) / 2;
    if (a[m] <= x) {
        ans = a[m];
        return first_pos(a, m + 1, r, x, ans);
    } else {
        return first_pos(a, l, m - 1, x, ans);
    }
}

int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << first_pos(a, 0, n - 1, x, -1) << endl;
    return 0;
}