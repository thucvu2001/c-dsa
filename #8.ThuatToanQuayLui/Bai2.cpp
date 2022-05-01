#include <bits/stdc++.h>
using namespace std;

int n, a[1001][1001];
bool ok = false;

void nhap()
{
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
}

void Try(int i, int j, string s)
{
    if (i == n && j == n) {
        cout << s << endl;
        ok = true;
        return;
    }
    if (i + 1 <= n && a[i + 1][j] == 1) {
        s += "D";
        a[i + 1][j] = 0;
        Try(i + 1, j, s);
        s.pop_back();
        a[i + 1][j] = 1;
    }
    if (j + 1 <= n && a[i][j + 1] == 1) {
        s += "R";
        a[i][j + 1] = 0;
        Try(i, j + 1, s);
        s.pop_back();
        a[i][j + 1] = 1;
    }
}

int main()
{
    cin >> n;
    nhap();
    string s = "";
    Try(1, 1, s);
    if (ok == false) {
        cout << "-1" << endl;
    }
    return 0;
}