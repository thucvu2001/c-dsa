// Dãy số nguyên dương vô hạn A[] được định nghĩa một cách đệ quy như sau: A[0] = 0; A[1] = 1; A[i] = A[i-1] + A[i-2] với mọi n ≥ 2. Cho số nguyên dương N không quá 10^9. Hãy xác định số thứ N trong dãy A[].
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
    matran x = powMod(a, n / 2);
    if (n % 2 == 1) {
        return x * x * a;
    } else {
        return x * x;
    }
}

int main()
{
    matran a;
    a.F[0][0] = 1;
    a.F[0][1] = 1;
    a.F[1][0] = 1;
    a.F[1][1] = 0;
    long long n;
    cin >> n;
    matran res = powMod(a, n);
    cout << res.F[0][1] << endl;
    return 0;
}