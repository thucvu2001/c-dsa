// Tìm số Fibonacci thứ N sau khi chia dư kết quả cho 10^9 + 7
// su dung ma tran 1 1 luy thua mu n thi ra duoc ma tran F(n + 1)  F(n)
//                 1 0                                    F(n)      F(n - 1)
// F(n) la so fibonacci thu n

#include <bits/stdc++.h>
using namespace std;

const int MOD = (int)1e9 + 7;

struct matran {
    long long F[2][2];
};

matran operator*(matran a, matran b)
{
    matran ans;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            ans.F[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                ans.F[i][j] += a.F[i][k] * b.F[k][j];
                ans.F[i][j] %= MOD;
            }
        }
    }
    return ans;
}

matran powMod(matran a, long long n)
{
    if (n == 1) {
        return a;
    }
    matran tmp = powMod(a, n / 2);
    if (n % 2 == 1) {
        return tmp * tmp * a;
    } else {
        return tmp * tmp;
    }
}

int main()
{
    long long n;
    cin >> n;
    matran a;
    a.F[0][0] = 1;
    a.F[0][1] = 1;
    a.F[1][0] = 1;
    a.F[1][1] = 0;
    matran res = powMod(a, n);
    cout << res.F[0][1] << endl;
    return 0;
}