#include <bits/stdc++.h>
using namespace std;

int n, k, S, a[1001], X[1001], ans;

void nhap()
{

    cin >> n >> S;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
}

void Try(int i)
{
    for (int j = X[i - 1] + 1; j <= n - k + i; j++) {
        X[i] = j;
        if (i == k) {
            int sum = 0;
            for (int t = 1; t <= k; t++) {
                sum += a[X[t]];
            }
            if (sum == S) {
                ans = k;
                return;
            }
        } else {
            Try(i + 1);
        }
    }
}

int main()
{
    nhap();
    for (int i = 1; i <= n; i++) {
        k = i;
        Try(1);
        if (ans != 0) {
            cout << ans << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}