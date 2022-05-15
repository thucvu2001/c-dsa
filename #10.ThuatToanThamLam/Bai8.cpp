#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    int n;
    cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++) {
        int id;
        cin >> id;
        cin >> a[i].second >> a[i].first;
    }
    sort(a, a + n, greater<pair<int, int>>());
    vector<bool> used(n, false);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = a[i].second - 1; j >= 0; j--) {
            if (!used[j]) {
                ans += a[i].first;
                used[j] = true;
                break;
            }
        }
    }
    cout << ans << endl;
}