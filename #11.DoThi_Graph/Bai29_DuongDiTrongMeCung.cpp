// Cho mê cung A có n hàng, n cột. Một con chuột xuất phát từ ô (s, t) và di chuyển tới ô (u, v).
//  Nhiệm vụ của bạn là xác định số bước đi tối thiểu để con chuột con thể di chuyển từ ô (s, t) tới ô (u, v) hoặc xác định rằng không thể tìm được đường tới ô (u, v).
// Mê cung A chỉ bao gồm các số 1 hoặc 0. Trong đó 1 đại diện cho đường đi và 0 đại diện cho vật cản, con chuột chỉ có thể di chuyển từ ô hiện tại sang các ô chung đỉnh với nó và có đường đi.

#include <bits/stdc++.h>
using namespace std;

int n, s, t, u, v;
int a[1001][1001];
int d[1001][1001]; // luu duong di

int dx[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int dy[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };

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
    a[i][j] = 0; // danh dau dinh (i, j) da duoc tham
    while (!q.empty()) {
        pair<int, int> top = q.front();
        q.pop();
        for (int k = 0; k < 8; k++) {
            int i1 = top.first + dx[k];
            int j1 = top.second + dy[k];
            if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1] == 1) {
                q.push({ i1, j1 });
                a[i1][j1] = 0;
                d[i1][j1] = d[top.first][top.second] + 1;
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