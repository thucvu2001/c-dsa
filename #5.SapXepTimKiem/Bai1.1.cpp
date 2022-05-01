#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool cmp3(string a, string b)
{
    if (a.size() != b.size())
        return a.size() < b.size();
    else
        return a < b;
}
bool cmp4(pair<string, int> a, pair<string, int> b)
{
    if (a.second != b.second)
        return a.second > b.second;
    return a.first < b.first;
}
int main()
{
    int n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << endl;
    for (int i = n - 1; i >= 0; i--)
        cout << a[i] << ' ';
    sort(a, a + n, cmp3);
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << endl;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
        mp[a[i]]++;
    vector<pair<string, int>> v;
    for (pair<string, int> it : mp)
        v.push_back(it);
    sort(begin(v), end(v), cmp4);
    for (auto it : v) {
        for (int j = 0; j < it.second; j++) {
            cout << it.first << ' ';
        }
    }
}
