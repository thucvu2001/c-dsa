#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> dske[1001];
    int n, m;
    cin >> n >> m; // n dinh, m canh
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        dske[x].push_back(y);
        dske[y].push_back(x);
    }
    for (int i = 1; i <= n; i++) {
        sort(dske[i].begin(), dske[i].end());
    }
    for (int i = 1; i <= n; i++) {
        cout << i << " : ";
        for (int x : dske[i]) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
