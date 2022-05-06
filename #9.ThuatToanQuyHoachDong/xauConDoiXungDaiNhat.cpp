#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    string s;
    cin >> s;
    int n = s.size();
    s = "1" + s;
    bool F[n + 1][n + 1];
    memset(F, 0, sizeof(F));
    for (int i = 1; i <= n; i++)
        F[i][i] = true;
    int res = 1;
    // duyet tung do dai cua xau con k : 2 => n
    for (int k = 2; k <= n; k++) {
        for (int i = 1; i <= n - k + 1; i++) {
            // i : chi so bat dau cua xau con
            // j : chi so ket thuc
            int j = i + k - 1;
            if (k == 2 && s[i] == s[j]) {
                F[i][j] = true;
            } else {
                F[i][j] = F[i + 1][j - 1] && (s[i] == s[j]);
            }
            if (F[i][j])
                res = max(res, j - i + 1);
        }
    }
    cout << res << endl;
}
