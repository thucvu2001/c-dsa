#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a[n], b[m];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int i = 0, j = 0, cnt = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            cnt++;
            if (cnt == k) {
                cout << a[i] << endl;
                return 0;
            }
            ++i;
        } else {
            cnt++;
            if (cnt == k) {
                cout << b[j] << endl;
            }
            ++j;
        }
    }
    while (i < n) {
        cnt++;
        if (cnt == k) {
            cout << a[i] << endl;
            return 0;
        }
        i++;
    }
    while (j < m) {
        cnt++;
        if (cnt == k) {
            cout << b[j] << endl;
        }
        j++;
    }
    return 0;
}