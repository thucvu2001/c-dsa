#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> dske[1001];
bool visited[1001];

void nhap()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        dske[x].push_back(y);
    }
}

void DFS(int u)
{
    visited[u] = true;
    for (int v : dske[u]) {
        if (!visited[v]) {
            DFS(v);
        }
    }
}

int main()
{
    nhap();
    for (int i = 1; i <= n; i++) {
        memset(visited, false, sizeof(visited));
        DFS(i);
        for (int i = 1; i <= n; i++) {
            if (!visited[i]) {
                cout << "0" << endl;
                return 0;
            }
        }
    }
    cout << "1" << endl;
    return 0;
}