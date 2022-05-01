#include <bits/stdc++.h>

using namespace std;
int main()
{
    int m, s;
    cin >> m >> s;
    if (m * 9 < s || (s == 0 && m >= 2)) {
        cout << "NOT FOUND\n";
    } else {
        int nho[m], lon[m];
        int t = s;
        --s; // giu lai 1 don vi
        for (int i = m - 1; i > 0; i--) {
            if (s >= 9) {
                nho[i] = 9;
                s -= 9;
            } else {
                nho[i] = s;
                s = 0;
            }
        }
        nho[0] = s + 1;
        for (int i = 0; i < m; i++) {
            if (t >= 9) {
                lon[i] = 9;
                t -= 9;
            } else {
                lon[i] = t;
                t = 0;
            }
        }
        for (int i = 0; i < m; i++) {
            cout << nho[i];
        }
        cout << endl;
        for (int i = 0; i < m; i++) {
            cout << lon[i];
        }
    }
    return 0;
}
