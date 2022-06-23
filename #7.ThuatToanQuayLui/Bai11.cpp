#include <bits/stdc++.h>
using namespace std;

int n, a[101], X[101];
vector<string> ans;

void nhap()
{
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
}

void Try(int i, int pos)
{
    for (int j = pos; j <= n; j++) {
        if (a[j] > X[i - 1]) {
            X[i] = a[j];
            if (i >= 2) {
                string tmp = "";
                for (int t = 1; t <= i; t++) {
                    tmp += to_string(X[t]) + " ";
                }
                ans.push_back(tmp);
            } 
            Try(i + 1, j + 1);
        }
    }
}

int main()
{
    nhap();
    Try(1, 1);
    sort(ans.begin(), ans.end());
    for (string x : ans) {
        cout << x << endl;
    }
    return 0;
}