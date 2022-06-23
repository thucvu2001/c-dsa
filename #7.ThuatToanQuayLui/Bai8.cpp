#include <bits/stdc++.h>
using namespace std;

int n, k, sum = 0, a[50];
int ans = 0; // ket qua
bool daXet[50];

void nhap()
{
    memset(daXet, false, sizeof(daXet)); // false la chua su dung
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
    }
}

void Try(int cnt, int s)
{
    if (cnt == k) {
        ans = 1;
        return;
    }
    for (int j = 1; j <= n; j++) {
        if (daXet[j] == false && s + a[j] <= sum) {
            s += a[j];
            daXet[j] = true; // danh dau da su dung
            if (s == sum) {
                Try(cnt + 1, 0); // dem tang them 1 tap con
            } else {
                Try(cnt, s); // tim tiep phan tu cho tap con hien tai
            }
            daXet[j] = false; // tra lai ve chua su dung
            s -= a[j];
        }
    }
}

int main()
{
    nhap();
    if (sum % k != 0) {
        cout << "0" << endl;
    } else {
        sum /= k; // sum luc nay la tong cua 1 mang con
        Try(0, 0);
        cout << ans << endl;
    }
    return 0;
}