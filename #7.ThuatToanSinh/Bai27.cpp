#include <bits/stdc++.h>
using namespace std;

int n, a[1001];
vector<vector<int>> res;
bool check;

void khoiTao()
{
    for (int i = 1; i <= n; i++) {
        a[i] = i;
    }
}
bool kiemTra(vector<int> a)
{
    for (int i = 1; i < a.size(); i++) {
        if (abs(a[i] - a[i - 1]) == 1) {
            return false;
        }
    }
    return true;
}
void hoanVi()
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1]) {
        i--;
    }
    if (i == 0) {
        check = false;
    } else {
        int j = n;
        while (a[i] > a[j]) {
            j--;
        }
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}
int main()
{
    cin >> n;
    check = true;
    khoiTao();
    while (check) {
        vector<int> v;
        for (int i = 1; i <= n; i++) {
            v.push_back(a[i]);
        }
        hoanVi();
        res.push_back(v);
    }
    for (auto it : res) {
        if (kiemTra(it)) {
            for (int i = 0; i < it.size(); i++) {
                cout << it[i];
            }
            cout << endl;
        }
    }
    return 0;
}