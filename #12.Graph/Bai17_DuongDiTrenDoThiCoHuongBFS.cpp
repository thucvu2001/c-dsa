// Cho đồ thị có hướng G = (V, E) được biểu diễn dưới dạng danh sách cạnh.
// Hãy tìm đường đi theo thuật toán BFS từ đỉnh s tới đỉnh t.
// Trong qúa trình mở rộng của thuật toán BFS, luôn ưu tiên mở rộng đỉnh có số thứ tự nhỏ hơn.

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

void BFS(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int x : dske[v]) {
            if (!visited[x]) {
                q.push(x);
                visited[x] = true;
                pre[x] = v;
            }
        }
    }
}

int main()
{
    nhap();
    BFS(s);
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