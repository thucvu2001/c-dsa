#include <bits/stdc++.h>
using namespace std;

int n, m, s;
vector<pair<int, int>> dske[1001];
int d[1001]; // luu khoang cach

void nhap()
{
    cin >> n >> m >> s;
    for (int i = 1; i <= m; i++) {
        int x, y, w;
        cin >> x >> y >> w;
        dske[x].push_back({ y, w });
        dske[y].push_back({ x, w }); // do thi vo huong
    }
}

void dijkstra(int s)
{
    for (int i = 1; i <= n; i++) {
        d[i] = 1e9;
    }
    d[s] = 0;
    // d[i]: khoang cach ngan nhat tu dinh s toi dinh i

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;
    Q.push({ 0, s });

    while (!Q.empty()) {
        pair<int, int> top = Q.top();
        Q.pop();
        int distance = top.first; // khoang cach tu dinh s toi dinh hien tai
        int v = top.second;

        // check
        if (distance > d[v]) {
            continue;
        }
        // relaxation
        // duyet cac dinh ke voi dinh v va cap nhat
        for (auto it : dske[v]) {
            int y = it.first, w = it.second;
            if (d[y] > d[v] + w) {
                d[y] = d[v] + w;
                Q.push({ d[y], y });
            }
        }
    }
}

int main()
{
    nhap();
    dijkstra(s);
    for (int i = 1; i <= n; i++) {
        cout << d[i] << " ";
    }
    return 0;
}