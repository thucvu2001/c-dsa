#include <bits/stdc++.h>
using namespace std;

const int MOD = (int)1e9 + 7;
long long C[1001][1001];
void init()
{
    for (int i = 0; i <= 100; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                C[i][j] = 1;
            } else {
                C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]);
            }
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    init();
    cout << C[m + n - 1][n - 1] << endl;
    return 0;
}
