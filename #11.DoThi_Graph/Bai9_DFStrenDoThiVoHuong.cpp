// Cho đồ thị vô hướng G = được biểu diễn dưới dạng danh sách cạnh.
// Hãy thực hiện in ra danh sách các đỉnh được duyệt theo thuật toán DFS(s).

#include <bits/stdc++.h>
using namespace std;

int n, m, s;
vector<int> dske[1001];
bool visited[1001];

void nhap()
{
    cin >> n >> m >> s;
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        dske[x].push_back(y);
        dske[y].push_back(x);
    }
    for (int i = 1; i <= n; i++) {
        sort(dske[i].begin(), dske[i].end());
    }
    memset(visited, false, sizeof(visited));
}

void dfs(int u)
{
    cout << u << " ";
    visited[u] = true;
    for (int v : dske[u]) {
        if (!visited[v]) {
            dfs(v);
        }
    }
}

int main()
{
    nhap();
    dfs(s);
    return 0;
}