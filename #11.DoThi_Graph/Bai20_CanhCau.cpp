
#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> dske[1001];
bool visited[1001];
vector<pair<int, int>> dscanh;

void nhap()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        dske[x].push_back(y);
        dske[y].push_back(x);
        dscanh.push_back({ x, y });
    }
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

void dfs2(int u, int s, int t)
{ // xet tai dinh u va loai bo canh (s,t)
    visited[u] = true;
    for (int v : dske[u]) {
        if ((u == s && v == t) || (u == t && v == s)) {
            continue;
        } else if (!visited[v]) {
            dfs2(v, s, t);
        }
    }
}

void canhCau()
{
    int ans = 0; // dem so canh cau
    int tplt = 0; // dem so tplt ban dau
    memset(visited, false, sizeof(visited));
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            dfs(i);
            tplt++;
        }
    }
    for (auto it : dscanh) {
        int dem = 0;
        int s = it.first, t = it.second;
        memset(visited, false, sizeof(visited));
        for (int i = 1; i <= n; i++) {
            if (!visited[i]) {
                dfs2(i, s, t);
                dem++;
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
    canhCau();
    return 0;
}