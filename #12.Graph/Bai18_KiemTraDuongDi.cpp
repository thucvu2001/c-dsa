// Cho đồ thị vô hướng G = (V, E) được biểu diễn dưới dạng danh sách cạnh.
// Có Q truy vấn, mỗi truy vấn yêu cầu trả lời câu hỏi giữa 2 đỉnh s và t có tồn tại đường đi tới nhau hay không ?

#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> dske[1001];
bool visited[1001];
int tplt[1001];
int cnt = 1;

void nhap()
{
    cin >> n >> m;
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

void DFS(int u)
{
    visited[u] = true;
    tplt[u] = cnt;
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
        if (!visited[i]) {
            DFS(i);
            cnt++;
        }
    }
    int q;
    cin >> q;
    while (q--) {
        int x, y;
        cin >> x >> y;
        if (tplt[x] == tplt[y]) {
            cout << "1" << endl;
        } else {
            cout << "-1" << endl;
        }
    }
    return 0;
}