#include <bits/stdc++.h>
using namespace std;

int a[1001], n, cnt;
bool check;

void khoiTao()
{
    a[1] = n;
    cnt = 1;
}

void sinh()
{
    int i = cnt;
    while (i >= 1 && a[i] == 1) {
        i--;
    }
    if (i == 0) {
        check = false;
    } else {
        a[i]--;
        int tmp = cnt - i + 1;
        int q = tmp / a[i];
        int r = tmp % a[i];
        cnt = i;
        if (q) {
            for (int j = 1; j <= q; j++) {
                a[i + j] = a[i];
            }
            cnt += q;
        }
        if (r) {
            a[cnt + 1] = r;
            cnt++;
        }
    }
}

int main()
{
    cin >> n;
    khoiTao();
    check = true;
    int dem = 1;
    vector<vector<int>> res;
    while (check) {
        vector<int> v(a + 1, a + cnt + 1);
        res.push_back(v);
        sinh();
    }
    cout << res.size() << endl;
    for (auto it : res) {
        for (int i = 0; i < it.size(); i++) {
            cout << it[i];
            if (i != it.size() - 1) {
                cout << "+";
            }
        }
        cout << endl;
    }
    return 0;
}