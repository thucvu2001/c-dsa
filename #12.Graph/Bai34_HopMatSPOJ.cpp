// Có K người (1 ≤ K ≤ 100) đứng tại vị trí nào đó trong N địa điểm cho trước (1 ≤ N ≤ 1,000) được đánh số từ 1..N.
// Các điểm được nối với nhau bởi M đoạn đường một chiều (1 ≤ M ≤ 10,000) (không có đoạn đường nào nối một điểm với chính nó).
// Mọi người muốn cùng tụ họp tại một địa điểm nào đó.
// Tuy nhiên, với các đường đi cho trước, chỉ có một số địa điểm nào đó có thể được chọn là điểm họp mặt.
// Cho trước K, N, M và vị trí ban đầu của K người cùng với M đường đi một chiều, hãy xác định xem có bao nhiêu điểm có thể được chọn làm điểm họp mặt.

#include <bits/stdc++.h>
using namespace std;

int k, n, m;
vector<int> dske[1001];
vector<int> vitri;
bool visited[1001];
int dem[1001]; // dem xem cac dinh tren do thi co bao nhieu dinh di qua duoc no? neu dem[i] == thi dinh do thoa man

void nhap()
{
    cin >> k >> n >> m;
    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        vitri.push_back(x);
    }
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        dske[x].push_back(y);
    }
    memset(visited, false, sizeof(visited));
}

void dfs(int u)
{
    dem[u]++;
    visited[u] = true;
    for (int v : dske[u]) {
        if (!visited[v]) {
            dfs(v);
        }
    }
}

int main()
{
    int cnt = 0;
    nhap();
    for (int x : vitri) {
        memset(visited, false, sizeof(visited));
        dfs(x);
    }
    for (int i = 1; i <= n; i++) {
        if (dem[i] == k) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}