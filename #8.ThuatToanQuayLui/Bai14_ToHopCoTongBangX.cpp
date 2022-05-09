#include <bits/stdc++.h>
using namespace std;

int n, S, a[1001], X[1001];
vector<vector<int>> res;

void nhap()
{
    cin >> n >> S;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
}

void Try(int i, int pos, int sum)
{
    for (int j = pos; j <= n; j++) {
        if (sum + a[j] <= S) {
            sum += a[j];
            X[i] = a[j];
            if (sum == S) {
                vector<int> tmp(X + 1, X + i + 1);
                res.push_back(tmp);

            } else {
                Try(i + 1, j, sum);
            }
            sum -= a[j];
        }
    }
}

int main()
{
    nhap();
    Try(1, 1, 0);
    if (res.size() == 0) {
        cout << "-1" << endl;
    } else {
        cout << res.size() << endl;
        for (auto it : res) {
            cout << "{";
            for (int j = 0; j < it.size(); j++) {
                cout << it[j];
                if (j == it.size() - 1) {
                    cout << "}" << endl;
                } else {
                    cout << " ";
                }
            }
        }
    }
    return 0;
}