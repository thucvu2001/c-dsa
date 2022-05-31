// Tý đang xây dựng một mạng xã hội và mời các bạn của mình dùng thử.
// Bạn của bạn cũng là bạn. Vì vậy, Tý muốn mạng xã hội của mình là hoàn hảo, tức với mọi bộ ba X, Y, Z, nếu X kết bạn với Y, Y kết bạn với Z thì X và Z cũng phải là bạn bè của nhau trên mạng xã hội.
// Các bạn hãy xác định xem mạng xã hội hiện tại của Tý có là hoàn hảo hay không?
// Nếu có hãy in ra “YES”, “NO” trong trường hợp ngược lại.

#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> dske[1001];
bool visited[1001];
int dem = 1;
vector<int> tplt[1001];

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

void dfs(int u)
{
    visited[u] = true;
    tplt[dem].push_back(u);
    for (int v : dske[u]) {
        if (!visited[v]) {
            dfs(v);
        }
    }
}

int main()
{
    nhap();
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            dfs(i);
            dem++;
        }
    }
    for (int i = 1; i <= dem; i++) {
        for (int j : tplt[i]) {
            if (tplt[i].size() - 1 != dske[j].size()) {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}