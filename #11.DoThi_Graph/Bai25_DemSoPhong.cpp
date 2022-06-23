// Bạn được đưa cho một bản đồ của một tòa nhà và nhiệm vụ của bạn là đếm số lượng phòng của tòa nhà đó.
// Kích thước của bản đồ là n × m hình vuông và mỗi hình vuông là sàn hoặc tường.
// Bạn có thể đi bộ sang trái, phải, lên và xuống qua các ô sàn.

#include <bits/stdc++.h>
using namespace std;

int n, m;
string a[1001];

int dx[4] = { -1, 0, 0, 1 };
int dy[4] = { 0, -1, 1, 0 };

void nhap()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void dfs(int i, int j)
{
    a[i][j] = '#';
    for (int k = 0; k < 4; k++) {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == '.') {
            dfs(i1, j1);
        }
    }
}

int main()
{
    nhap();
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == '.') {
                dfs(i, j);
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
