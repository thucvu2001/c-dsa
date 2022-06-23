#include <bits/stdc++.h>
using namespace std;

int n = 8, X[101], cot[101], xuoi[101], nguoc[101], ans = 0;
int a[101][101];

void nhap()
{
    memset(cot, 1, sizeof(cot));
    memset(xuoi, 1, sizeof(xuoi));
    memset(nguoc, 1, sizeof(nguoc));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
}

void Try(int i)
{
    for (int j = 1; j <= n; j++) {
        if (cot[j] && xuoi[i - j + n] && nguoc[i + j - 1]) {
            cot[j] = xuoi[i - j + n] = nguoc[i + j - 1] = 0;
            X[i] = j;
            if (i == n) {
                int sum = 0;
                for (int t = 1; t <= n; t++) {
                    sum += a[t][X[t]]; // X[t] là chỉ số hàng đã gán ở trên;
                }
                ans = max(ans, sum);
            } else {
                Try(i + 1);
            }
            cot[j] = xuoi[i - j + n] = nguoc[i + j - 1] = 1;
        }
    }
}

int main()
{
    nhap();
    Try(1);
    cout << ans << endl;
    return 0;
}