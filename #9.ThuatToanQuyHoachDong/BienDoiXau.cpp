#include <bits/stdc++.h>
using namespace std;

using ll = long long;
// S=>T
// F[i][j] : Số thao tác tối thiểu để biến i kí tự đầu tiên của xâu S thành j kí tự
// đầu tiên của xâu T

// F[i][j] = F[i - 1][j - 1] : S[i] == T[j]
// F[i][j] = min({F[i - 1][j], F[i][j - 1], F[i - 1][j - 1]}) + 1

// F[i][0] = i :
// F[0][i] = i :

int main()
{
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    s = "1" + s;
    t = "1" + t;
    int F[n + 1][m + 1];
    memset(F, 0, sizeof(F));
    // bien doi i ki tu dau tien cua xau S thanh xau rong : xoa
    for (int i = 1; i <= n; i++)
        F[i][0] = i;
    // bien doi S tu xau rong thanh i ki tu dau tien cua xau T : chen
    for (int i = 1; i <= m; i++)
        F[0][i] = i;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s[i] == t[j])
                F[i][j] = F[i - 1][j - 1];
            else
                F[i][j] = min({ F[i - 1][j], F[i][j - 1], F[i - 1][j - 1] }) + 1;
        }
    }
    cout << F[n][m] << endl;
    return 0;
}
