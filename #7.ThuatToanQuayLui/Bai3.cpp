#include <bits/stdc++.h>
using namespace std;

int n;
int a[1001][1001];
vector<string> res;

void nhap()
{
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
}

int dx[4] = { -1, 0, 0, 1 }; // chi so hang i
int dy[4] = { 0, -1, 1, 0 }; // chi so cot j
string path = "ULRD";

void Try(int i, int j, string s)
{
    if (i == n && j == n) {
        res.push_back(s);
        return;
    }
    // duyet 4 o xung quanh
    for (int k = 0; k < 4; k++) {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1] == 1) {
            a[i1][j1] = 0;
            s += path[k];
            Try(i1, j1, s);
            a[i1][j1] = 1;
            s.pop_back();
        }
    }
}

int main()
{
    cin >> n;
    nhap();
    string s = "";
    a[1][1] = 0; // tranh truong hop quay lai o ban dau
    Try(1, 1, s);
    sort(res.begin(), res.end());
    if (res.size() == 0) {
        cout << -1 << endl;
    } else {
        for (string x : res) {
            cout << x << endl;
        }
    }
    return 0;
}