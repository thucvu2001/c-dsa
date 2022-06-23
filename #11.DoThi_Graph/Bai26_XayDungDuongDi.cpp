// Ở 28techland có n thành phố và m đường giữa chúng. Mục tiêu là xây dựng những con đường mới để có một tuyến đường giữa hai thành phố bất kỳ.
// Nhiệm vụ của bạn là tìm ra số lượng đường tối thiểu cần thiết, đồng thời xác định những con đường nào nên được xây dựng.

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
        dske[y].push_back(x);
    }
    for (int i = 1; i <= n; i++) {
        sort(dske[i].begin(), dske[i].end());
    }
    memset(visited, false, sizeof(visited));
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

int main()
{
    nhap();
    int cnt = 0;
    vector<int> ans;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            cnt++;
            dfs(i);
            ans.push_back(i);
        }
    }
    cout << cnt - 1 << endl;
    for (int i = 0; i < ans.size() - 1; i++) {
        cout << ans[i] << " " << ans[i + 1] << endl;
    }
    return 0;
}
