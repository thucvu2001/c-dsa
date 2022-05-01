#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int& x : a) {
        cin >> x;
    }
    sort(a, a + n);
    int ans = 0, l = 0, r = n - 1;
    while (l < r) {
        if (a[l] + a[r] <= x) {
            ans++;
            l++;
            r--;
        } else {
            ans++;
            r--;
        }
    }
    if (l == r) {
        ans++;
    }
    cout << ans << endl;
    return 0;
}