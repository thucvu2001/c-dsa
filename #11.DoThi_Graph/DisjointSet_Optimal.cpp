// CTDL Disjoint Set tối ưu

#include <bits/stdc++.h>
using namespace std;

const int MaxN = 1001;
int n, m;
int parent[MaxN];
int sz[MaxN];

int find(int u)
{
    if (u == parent[u]) {
        return u;
    }
    return parent[u] = find(parent[u]);
}

// cach 2 cua ham find
int find2(int u)
{
    if (u == parent[u]) {
        return u;
    }
    int tmp = find(parent[u]);
    parent[u] = tmp;
    return parent[u];
}

bool Union(int u, int v)
{
    u = find(u);
    v = find(v);
    if (u == v) {
        return false;
    } else if (sz[u] < sz[v]) {
        parent[u] = v;
        sz[v] += sz[u];
        // sz[u] = sz[v];
    } else {
        parent[v] = u;
        sz[u] += sz[v];
        // sz[v] = sz[u];
    }
    return true;
}

void khoiTao()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        sz[i] = 1;
    }
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        Union(x, y);
    }
}

int main()
{
    khoiTao();
    return 0;
}