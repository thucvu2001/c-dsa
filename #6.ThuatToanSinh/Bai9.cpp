#include <bits/stdc++.h>
using namespace std;
int n, k, a[1001];
bool check;

void khoiTao()
{
    for (int i = 1; i <= k; i++) {
        a[i] = i;
    }
}
void sinh()
{
    int i = k;
    while (i >= 0 && a[i] == n - k + i) {
        i--;
    }
    if (i == 0) {
        check = false;
    } else {
        a[i]++;
        for (int j = i + 1; j <= k; j++) {
            a[j] = a[j - 1] + 1;
        }
    }
}
int main()
{
    cin >> n >> k;
    string s = "";
    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        s += to_string(x);
    }
    vector<string> v;
    check = true;
    khoiTao();
    while (check) {
        string t = "";
        for (int i = 1; i <= k; i++) {
            t += to_string(a[i]);
        }
        v.push_back(t);
        sinh();
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == s) {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}