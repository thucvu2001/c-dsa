// Cho đồ thị có hướng G = (V, E) được biểu diễn dưới dạng danh sách cạnh.
// Hãy tìm đường đi theo thuật toán DFS từ đỉnh s tới đỉnh t.
// Trong qúa trình mở rộng của thuật toán DFS, luôn ưu tiên mở rộng đỉnh có số thứ tự nhỏ hơn.

#include <bits/stdc++.h>
using namespace std;

int n, m, s, t;
vector<int> dske[1001];
bool visited[1001];
int pre[1001];

void nhap()
{
    cin >> n >> m >> s >> t;
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        dske[x].push_back(y);
    }
    for (int i = 1; i <= n; i++) {
        sort(dske[i].begin(), dske[i].end());
    }
    memset(visited, false, sizeof(visited));
}

void DFS(int u)
{
    visited[u] = true;
    for (int v : dske[u]) {
        if (!visited[v]) {
            DFS(v);
            pre[v] = u;
        }
    }
}

int main()
{
    nhap();
    DFS(s);
    if (!visited[t]) {
        cout << "-1" << endl;
    } else {
        vector<int> path;
        while (s != t) {
            path.push_back(t);
            t = pre[t];
        }
        path.push_back(s);
        reverse(path.begin(), path.end());
        for (int x : path) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}