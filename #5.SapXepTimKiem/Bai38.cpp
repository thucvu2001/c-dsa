#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back({ x, y });
    }
    sort(v.begin(), v.end(), cmp);
    int cnt = 1, endTime = v[0].second;
    for (auto it : v) {
        if (it.first >= endTime) {
            cnt++;
            endTime = it.second;
        }
    }
    cout << cnt << endl;
    return 0;
}