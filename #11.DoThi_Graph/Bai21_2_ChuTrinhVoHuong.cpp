#include <bits/stdc++.h>
using namespace std;

int n, m;
int parent[1001], sz[1001];

void init()
{
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        sz[i] = 1;
    }
}

int find(int u)
{
    if (u == parent[u]) {
        return u;
    }
    return parent[u] = find(parent[u]);
}

bool Union(int u, int v)
{
    u = find(u);
    v = find(v);
    if (u == v) {
        return false;
    }
    if (sz[u] < sz[v]) {
        swap(u, v); // de u luon la lon hon
    }
    parent[v] = u;
    sz[u] += sz[v];
    return true;
}

void nhap()
{
    cin >> n >> m;
    init();
    bool ok = false;
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        if (Union(x, y) == false) {
            ok = true; // check chu trinh
        }
    }
    if (ok) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }
}

int main()
{
    nhap();
    return 0;
}