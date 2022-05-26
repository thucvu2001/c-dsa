// Ma trận trọng số sang danh sách cạnh (vô hướng)
#include <bits/stdc++.h>
using namespace std;

int a[1001][1001];
vector<vector<int>> ans;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            vector<int> tmp;
            cin >> a[i][j];
            if (a[i][j] != 0 && i < j) {
                tmp.push_back(i);
                tmp.push_back(j);
                tmp.push_back(a[i][j]);
                ans.push_back(tmp);
            }
        }
    }
    for (auto it : ans) {
        for (auto x : it) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}