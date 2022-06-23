#include <bits/stdc++.h>
using namespace std;

int main()
{
    int mod = 1e9 + 7;
    int n;
    cin >> n;
    long long sum = n * (n + 1) / 2;
    if (sum % 2) {
        cout << "0\n";
        return 0;
    }
    sum /= 2;
    vector<vector<int>> res(n + 1, vector<int>(sum + 1, 0));
    res[0][0] = 1;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= sum; j++) {
            res[i][j] = res[i - 1][j];
            if (j >= i) {
                res[i][j] += res[i - 1][j - i];
                res[i][j] %= mod;
            }
        }
    }
    cout << res[n - 1][sum] << endl;
    return 0;
}