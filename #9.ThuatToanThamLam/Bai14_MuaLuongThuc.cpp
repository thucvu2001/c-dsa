#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s, m; // n: so luong thuc co the mua trong 1 ngay, s: so ngay can su dung luong thuc, m la so luong thuc can su dung trong 1 ngay
    cin >> n >> s >> m;
    int s1 = s - (s / 7); // tinh so ngay co the di mua luong thuc
    int res1 = s1 * n; // so luong thuc toi da co the mua
    int res2 = s * m; // so luong thuc can su dung
    if (s * m > s1 * n) {
        cout << "-1" << endl;
        return 0;
    } else {
        for (int i = 1; i <= s1; i++) {
            if (n * i >= res2) {
                cout << i << endl;
                return 0;
            }
        }
    }
    return 0;
}