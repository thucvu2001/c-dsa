#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, V;
    cin >> n >> V;
    int w[n + 1], v[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> w[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    int res[n + 1][V + 1]; // res[n][V]
    memset(res, 0, sizeof(res));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= V; j++) {
            res[i][j] = res[i - 1][j]; // khong lua chon do vat vao tui
            if (j >= w[i]) { // co the dua do vat thu i vao tui
                res[i][j] = max(res[i][j], res[i - 1][j - w[i]] + v[i]);
            }
        }
    }
    cout << res[n][V] << endl;
    return 0;
}