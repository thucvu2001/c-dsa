// Bạn được cung cấp một lưới 2D. Dấu '#' đại diện cho chướng ngại vật và dấu '.' đại diện cho không gian trống.
// Bạn cần tìm các khu vực của các thành phần bị ngắt kết nối. Các ô (i + 1, j), (i, j + 1), (i-1, j), (i, j-1) là các ô liền kề với ô (i, j).
#include <bits/stdc++.h>
using namespace std;

int n, m;
string a[1001];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int dem = 1;

void nhap()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void bfs(int i, int j)
{
    queue<pair<int, int>> q;
    q.push({ i, j });
    a[i][j] = '#';
    while (!q.empty()) {
        pair<int, int> top = q.front();
        q.pop();
        for (int k = 0; k < 4; k++) {
            int i1 = top.first + dx[k];
            int j1 = top.second + dy[k];
            if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == '.') {
                q.push({ i1, j1 });
                a[i1][j1] = '#';
                dem++;
            }
        }
    }
}

int main()
{
    vector<int> dienTich;
    nhap();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == '.') {
                bfs(i, j);
                dienTich.push_back(dem);
                dem = 1;
            }
        }
    }
    for (int x : dienTich) {
        cout << x << " ";
    }
    return 0;
}