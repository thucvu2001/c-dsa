
#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<pair<int, int>> dske[1001];
bool used[1001];

void nhap()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y, w;
        cin >> x >> y >> w;
        dske[x].push_back({ y, w });
        dske[y].push_back({ x, w });
    }
    memset(used, false, sizeof(used));
}

void Prim(int s)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;
    Q.push({ 0, s }); // 0 la dinh, s la trong so
    int res = 0; // luu trong so min cua cay
    while (!Q.empty()) {
        pair<int, int> top = Q.top();
        Q.pop();
        int w = top.first;
        int x = top.second;
        if (used[x] == true) {
            continue;
        }
        res += w;
        used[x] = true;
        for (auto it : dske[x]) {
            int y = it.first; // dinh ke voi dinh x;
            int w1 = it.second; // trong so cua canh x, y;
            Q.push({ w1, y });
        }
    }
    cout << res << endl;
}

int main()
{
    nhap();
    Prim(1);
    return 0;
}