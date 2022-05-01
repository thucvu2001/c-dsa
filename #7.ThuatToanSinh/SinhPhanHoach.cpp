#include <bits/stdc++.h>
using namespace std;

int n, a[1001], cnt;
bool check;

void khoiTao()
{
    cnt = 1;
    a[1] = n;
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
    check = true;
    khoiTao();
    while (check) {
        for (int i = 1; i <= cnt; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }
    return 0;
}