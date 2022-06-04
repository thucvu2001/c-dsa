// Một đồ thị N đỉnh là một cây, nếu như nó có đúng N-1 cạnh và giữa 2 đỉnh bất kì, chỉ tồn tại duy nhất 1 đường đi giữa chúng.
// Cho một đồ thị vô hướng N đỉnh và M cạnh, hãy kiểm tra đồ thị đã cho có phải là một cây hay không?

// kiem tra neu do thi co 1 thanh phan lien thong va khong co chu trinh => cay

#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> dske[1001];
bool visited[1001];
int color[1001];

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
    memset(color, 0, sizeof(color));
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

bool DFS2(int u, int par)
{
    visited[u] = true;
    for (int v : dske[u]) {
        if (!visited[v]) {
            if (DFS2(v, u)) {
                return true;
            }
        } else if (v != par) {
            return true;
        }
    }
    return false;
}

int main()
{
    nhap();
    int ans = 0; // dem so thanh phan lien thong
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            DFS(i);
            ++ans;
        }
    }
    if (ans == 1) {
        memset(visited, false, sizeof(visited));
        if (DFS2(1, 0) == false) {
            cout << "1" << endl;
            return 0;
        }
    }
    cout << "0" << endl;
    return 0;
}