// tìm đường đi ngắn nhất từ đỉnh s đến mọi đỉnh còn lại trên đồ thị
#include <bits/stdc++.h>
using namespace std;

int n, m, s;
vector<pair<int, int>> dske[1001];
int d[1001]; // luu khoang cach từ đỉnh s đến các đỉnh còn lại;

void nhap()
{
    cin >> n >> m >> s;
    for (int i = 1; i <= m; i++) {
        int x;
        int y;
        int w; // lưu trọng số của cạnh (x, y)
        cin >> x >> y >> w;
        dske[x].push_back({ y, w });
        // dske[y].push_back({ x, w }); // neu vo huong 
    }
}

void dijkstra(int s)
{
    for (int i = 1; i <= n; i++) {
        d[i] = 1e9; // khởi tạo khoảng cách từ đỉnh s đến các đỉnh là vô cùng
    }
    d[s] = 0; // khoảng cách từ s->s = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q; // lưu khoảng cách nhỏ nhất
    Q.push({ 0, s });
    while (!Q.empty()) {
        pair<int, int> top = Q.top();
        Q.pop();
        int u = top.second;
        int kc = top.first;
        if (kc > d[u]) { // nếu khoảng cách từ đỉnh s tới đỉnh hiện tại (đường đi trực tiếp) > đường đi ngắn nhất từ đỉnh s tới đỉnh hiện tại thì bỏ qua
            continue;
        }

        // Relaxation: Cap nhat khoang cac h tu s toi moi dinh ke u
        for (auto it : dske[u]) {
            int v = it.first; // v la dinh ke voi dinh u
            int w = it.second; // w la trong so cua canh (u, v)
            if (d[v] > d[u] + w) {
                d[v] = d[u] + w;
                Q.push({ d[v], v });
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