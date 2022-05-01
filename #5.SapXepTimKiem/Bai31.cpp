#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sucManh;
    cin >> n >> sucManh;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back({ x, y });
    }
    sort(begin(v), end(v));
    bool ok = true;
    for (auto it : v) {
        if (sucManh <= it.first) {
            ok = false;
            break;
        } else {
            sucManh += it.second;
        }
    }
    if (ok) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}