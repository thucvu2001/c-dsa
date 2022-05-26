// Ma trận kề sang danh sách kề, danh sách cạnh (vô hướng).
#include <bits/stdc++.h>
using namespace std;

int a[1001][1001];
vector<pair<int, int>> dscanh;
vector<int> dske[1001];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
            if (a[i][j] == 1) {
                dske[i].push_back(j);
                if (i > j) {
                    dscanh.push_back({ i, j });
                }
            }
        }
    }
    for (auto it : dscanh) {
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
    for (int i = 1; i <= n; i++) {
        cout << i << " : ";
        for (auto it : dske[i]) {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}