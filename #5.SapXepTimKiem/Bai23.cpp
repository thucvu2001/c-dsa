#include <bits/stdc++.h>
using namespace std;

bool cmp1(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second) {
        return a.second > b.second;
    }
    return a.first < b.first;
}
bool cmp2(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    map<int, int> mp;
    for (int& x : a) {
        cin >> x;
        mp[x]++;
    }
    vector<pair<int, int>> v1, v2;
    for (int x : a) {
        v1.push_back({ x, mp[x] });
        v2.push_back({ x, mp[x] });
    }
    sort(v1.begin(), v1.end(), cmp1);
    for (auto it : v1) {
        cout << it.first << " ";
    }
    cout << endl;
    stable_sort(v2.begin(), v2.end(), cmp2);
    for (auto it : v2) {
        while (mp[it.first] != 0) {
            cout << it.first << " ";
            mp[it.first]--;
        }
    }
    return 0;
}
