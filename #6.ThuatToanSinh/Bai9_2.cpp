#include <bits/stdc++.h>
using namespace std;
int n, k, a[1001];
bool check;
vector<vector<int>> v; // luu lai cac cau hinh
void khoiTao()
{
    for (int i = 1; i <= k; i++) {
        a[i] = i;
    }
}
void sinh()
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i) {
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

bool ktra(int x[])
{
    for (int i = 1; i <= k; i++) {
        if (x[i] != a[i]) {
            return false;
        }
    }
    return true;
}

int main()
{
    check = true;
    khoiTao();
    cin >> n >> k;
    int x[k + 1];
    for (int i = 0; i < k; i++) {
        cin >> x[i];
    }
    int cnt = 1;
    while (check) {
        vector<int> tmp(a + 1, a + k + 1);
        v.push_back(tmp);
        sinh();
    }
    for (int i = v.size() - 1; i >= 0; i--) {
        bool check = true;
        for (int j = 0; j < k; j++) {
            if (x[j] != v[i][j]) {
                check = false;
            }
        }
        if (check) {
            cout << v.size() - i << endl;
            return 0;
        }
    }
    return 0;
}