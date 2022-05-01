#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool is_good(int w, int h, int n, ll res)
{
    ll x = res / w;
    ll y = res / h;
    if ((double)n / x <= y)
        return true;
    else
        return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int w, h, n;
    cin >> w >> h >> n;
    ll left = max(w, h), right = 1ll * n * max(w, h);
    ll res;
    while (left <= right) {
        ll mid = (left + right) / 2;
        if (is_good(w, h, n, mid)) {
            res = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    cout << res << endl;
}
