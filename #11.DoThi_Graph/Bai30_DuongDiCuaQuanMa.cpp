// Cho bàn cờ A cỡ nxn, một con mã ở ô (s, t) muốn di chuyển sang ô (u, v).
// Hãy tìm số bước tối thiểu để con mã có thể đến ô (u, v) hoặc xác định rằng con mã không thể đi tới nơi.
// Bàn cờ A được mô tả bằng các giá trị 0, 1, trong đó ô có giá trị 1 thì con mã có thể tự do di chuyển đến ô này,
// ngược lại nếu giá trị tại một ô của bàn cơ là 0 thì con mã không thể di chuyển đến ô này.
#include <bits/stdc++.h>
using namespace std;

int dx[8] = { -2, -2, -1, -1, +1, +1, +2, +2 };
int dy[8] = { -1, +1, -2, +2, -2, +2, -1, +1 };

int n, s, t, u, v;
int a[1001][1001];
int d[1001][1001];

void nhap()
{
    cin >> n >> s >> t >> u >> v;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
}

void bfs(int i, int j)
{
    queue<pair<int, int>> q;
    q.push({ i, j });
    a[i][j] = 0;
    while (!q.empty()) {
        pair<int, int> top = q.front();
        q.pop();
        for (int k = 0; k < 8; k++) {
            int i1 = top.first + dx[k];
            int j1 = top.second + dy[k];
            if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1] == 1) {
                d[i1][j1] = d[top.first][top.second] + 1;
                q.push({ i1, j1 });
                a[i1][j1] = 0;
            }
        }
    }
}

int main()
{
    nhap();
    bfs(s, t);
    if (d[u][v] == 0) {
        cout << "-1" << endl;
    } else {
        cout << d[u][v] << endl;
    }
    return 0;
}