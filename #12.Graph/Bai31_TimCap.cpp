// Bạn được cung cấp một cây gốc với các nút và nút 1 là gốc.
// Có một đường đi duy nhất giữa hai nút bất kỳ.
// Ở đây, d(i, j) được định nghĩa là số cạnh trong một đường đi ngắn nhất giữa 2 nút i và j.
// Nhiệm vụ của bạn phải tìm số lượng cặp i, j sao cho d(i, j) = d(1, i) - d(1, j).

// 2 đỉnh có quan hệ cha con thì sẽ là 1 cặp thoả mãn
// đếm xem mỗi node có bao nhiêu con, cộng tổng lại => số cặp
#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> dske[1001];
int d[1001];

void nhap()
{
    cin >> n;
    for (int i = 1; i <= n - 1; i++) {
        int x, y;
        cin >> x >> y;
        dske[x].push_back(y);
        dske[y].push_back(x);
    }
}

int dfs(int u, int par)
{
    int cnt = 1; // tinh chinh no la 1 cap
    for (int x : dske[u]) {
        if (x != par) {
            cnt += dfs(x, u);
        }
    }
    d[u] = cnt;
    return cnt;
}

int main()
{
    nhap();
    dfs(1, -1);
    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        ans += d[i];
    }
    cout << ans << endl;
    return 0;
}