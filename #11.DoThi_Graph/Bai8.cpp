// Ma trận trọng số sang danh sách cạnh (vô hướng)

#include <bits/stdc++.h>
using namespace std;

int a[1001][1001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] != 0 && i < j) {
                cout << i << " " << j << " " << a[i][j] << endl;
            }
        }
    }
    return 0;
}