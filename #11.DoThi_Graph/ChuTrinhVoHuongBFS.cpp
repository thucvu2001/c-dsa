#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> dske[1001];
int parent[1001];
bool visited[1001];

void nhap()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        dske[x].push_back(y);
        dske[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
}

bool BFS(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty()) {
        int top = q.front();
        q.pop();
        for (int v : dske[top]) {
            if (!visited[v]) {
                visited[v] = true;
                parent[v] = top;
                q.push(v);
            } else if (v != parent[top]) {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    nhap();
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            if (BFS(i)) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}