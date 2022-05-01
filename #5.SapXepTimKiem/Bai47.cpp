#include <bits/stdc++.h>
using namespace std;
bool is_good(int a[], int n, int t, long long m)
{
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        ans += m / a[i];
    }
    if (ans >= t) {
        return true;
    } else {
        return false;
    }
}

int main()
{
    int n, t;
    cin >> n >> t;
    int a[n];
    for (int& x : a)
        cin >> x;
    long long left = 0;
    long long right = 1ll * t * (*min_element(a, a + n));
    long long res;
    while (left <= right) {
        long long mid = (left + right) / 2;
        // kiem tra xem voi thoi gian mid co hoan thanh duoc t san pham k
        if (is_good(a, n, t, mid)) {
            res = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    cout << res << endl;
    return 0;
}