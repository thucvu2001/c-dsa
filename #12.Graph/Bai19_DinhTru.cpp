// Cho đồ thị vô hướng G = (V, E) được biểu diễn dưới dạng danh sách cạnh. Hãy đếm số lượng đỉnh trụ của đồ thị.
#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> dske[1001];
bool visited[1001];

void nhap()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        dske[x].push_back(y);
        dske[y].push_back(x);
    }
    // memset(visited, false, sizeof(visited));
}

void dfs(int u)
{
    visited[u] = true;
    for (int v : dske[u]) {
        if (!visited[v]) {
            dfs(v);
        }
    }
}

void dinhTru()
{
    int ans = 0; // dem so dinh tru
    int tplt = 0; // dem so tplt ban dau
    memset(visited, false, sizeof(visited));
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            ++tplt;
            dfs(i);
        }
    }
    for (int i = 1; i <= n; i++) {
        // loai bo dinh i khoi do thi
        memset(visited, false, sizeof(visited));
        visited[i] = true; // loai bo dinh i
        int dem = 0; // dem so tplt sau khi loai bo
        for (int j = 1; j <= n; j++) {
            if (!visited[j]) {
                ++dem;
                dfs(j);
            }
        }
        if (dem > tplt) {
            ans++;
        }
    }
    cout << ans << endl;
}

int main()
{
    nhap();
    dinhTru();
    return 0;
}