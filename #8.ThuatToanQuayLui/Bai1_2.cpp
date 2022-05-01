#include <bits/stdc++.h>
using namespace std;

int n, k, s, X[1001], ans = 0;

void Try(int i)
{
    for (int j = X[i - 1] + 1; j <= n - k + i; j++) {
        X[i] = j;
        if (i == k) {
            int sum = 0;
            for (int h = 1; h <= k; h++) {
                sum += X[h];
            }
            if (sum == s) {
                ans++;
            }
        } else {
            Try(i + 1);
        }
    }
}

int main()
{
    cin >> n >> k >> s;
    Try(1);
    cout << ans << endl;
    return 0;
}