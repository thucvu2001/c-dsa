// Chuyển danh sách cạnh sang danh sách kề (có hướng)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> dske[1001];
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        dske[x].push_back(y);
    }
    for (int i = 1; i <= n; i++) {
        sort(dske[i].begin(), dske[i].end());
        cout << i << " : ";
        for (auto it : dske[i]) {
            cout << it << " ";
        }
        cout << endl;
    }
}