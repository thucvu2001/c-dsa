#include <bits/stdc++.h>
using namespace std;

// Biến đổi xâu S, T;
// S => T
// F[i][j] : Số thao tác tối thiểu để biến i kí tự đầu tiên của xâu S, thành j kí tự đầu tiên của xâu T

// Bài toán con:
// F[i][0] = i : biến đổi i kí tự đầu tiên của xâu S thành xâu rỗng
// F[0][j] = j : biến đổi xâu rỗng S thành j kí tự đầu tiên của xâu T

// CT Qhd:
// nếu S[i] == T[j]:
// F[i][j] = F[i - 1][j - 1] 
// nếu S[i] != T[j]:
// F[i][j] = min({F[i - 1][j], F[i][j - 1], F[i - 1][j - 1]}) + 1
// trong do: F[i][j - 1]: thao tac chèn
//           F[i - 1][j]: thao tác xoá
//           F[i - 1][j - 1]: thao tác thay thế

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
    for (int i = 1; i <= n; i++) {
        F[i][0] = i;
    }

    // bien doi S tu xau rong thanh i ki tu dau tien cua xau T : chen
    for (int j = 1; j <= m; j++) {
        F[0][j] = j;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s[i] == t[j]) {
                F[i][j] = F[i - 1][j - 1];
            } else {
                F[i][j] = min({ F[i - 1][j], F[i][j - 1], F[i - 1][j - 1] }) + 1;
            }
        }
    }
    cout << F[n][m] << endl; // số thao tác ít nhất để biến đổi n kí tự đầu tiên của xâu S thành m kí tự đầu tiên của xâu T
    return 0;
}
