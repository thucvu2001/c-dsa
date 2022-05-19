#include <bits/stdc++.h>
using namespace std;

// Bai toan cai tui (0-1 Knapsack)

int main()
{
    int n, V; // n: so luong do vat, V the tich cai tui
    cin >> n >> V;
    int w[n + 1], v[n + 1]; // w: the tich cac do vat, v: gia tri cua cac do vat
    for (int i = 1; i <= n; i++) {
        cin >> w[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    int res[n + 1][V + 1]; // res[n][V] la dap an cua bai toan
    // res[i][j]: gia tri lon nhat cua cai tui co trong luong la j, bằng cách lựa chọn các đồ vật 1 đến đồ vật i;
    memset(res, 0, sizeof(res));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= V; j++) {
            res[i][j] = res[i - 1][j]; // khong lua chon do vat vao tui
            if (j >= w[i]) { // neu tui con co the dua do vat thu i vao
                res[i][j] = max(res[i][j], res[i - 1][j - w[i]] + v[i]);
            }
        }
    }
    cout << res[n][V] << endl;
    return 0;
}