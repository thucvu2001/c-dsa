#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s, m;// n: so luong thuc co the mua trong 1 ngay, s: so ngay can su dung luong thuc, m
    cin >> n >> s >> m;
    int s1 = s - (s / 7);
    int res1 = s1 * m; // so luong thuc toi da co the mua
    int res2 = s * m; // so luong thuc can su dung
    if (res1 < res2) {
        cout << "-1" << endl;
    } else {
        for (int i = 1; i <= s1; i++) {
            if (m * i >= res2) {
                cout << i << endl;
                return 0;
            }
        }
    }
    return 0;
}