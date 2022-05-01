#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}
int main()
{
    int n;
    cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n, cmp);
    long long endTime = a[0].first + a[0].second;
    for (int i = 1; i < n; i++) {
        endTime = max(endTime, (long long)a[i].first);
        endTime += a[i].second;
    }
    cout << endTime << endl;
    return 0;
}
