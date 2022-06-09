#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    s = "1" + s; // cong them de chi so bat dau la 1

    bool F[n + 1][n + 1]; // luu xau con bat dau tu [i] ket thuc o [j] co doi xung hay k?
    memset(F, false, sizeof(F));
    
    for (int i = 1; i <= n; i++) {
        F[i][i] = true; // xau con co do dai la 1 thi deu doi xung
    }
    int res = 1; // res luu do dai xau con doi xung dai nhat

    // duyet tung do dai cua xau con k : 2 -> n
    for (int k = 2; k <= n; k++) {
        for (int i = 1; i <= n - k + 1; i++) {
            // i : chi so bat dau cua xau con
            // j : chi so ket thuc
            int j = i + k - 1; // tinh chi so ket thuc dua vao do dai k
            if (k == 2 && s[i] == s[j]) { // neu xau co 2 ki tu va 2 ki tu giong nhau
                F[i][j] = true;
            } else {
                F[i][j] = F[i + 1][j - 1] && (s[i] == s[j]); // cong thuc qhd: dua vao xau con nho hon va neu 2 dau bang nhau thi xau lon doi xung
            }

            // tim max neu xau hien tai doi xung
            if (F[i][j] == true) {
                res = k;
            }
        }
    }
    cout << res << endl;
    return 0;
}
