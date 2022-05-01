#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back({ x, 1 });
        v.push_back({ y, -1 });
    }
    sort(begin(v), end(v));
    int ans = 0, cnt = 0;
    for (int i = 0; i < v.size(); i++) {
        cnt += v[i].second;
        ans = max(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}