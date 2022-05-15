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
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), cmp);
    int ans = 1;
    int endTime = a[0].second;
    for (int i = 1; i < n; i++) {
        if (a[i].first > endTime) {
            ans++;
            endTime = a[i].second;
        }
    }
    cout << ans << endl;
    return 0;
}