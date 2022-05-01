#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a[n], b[m];
    for (int& x : a) {
        cin >> x;
    }
    for (int& x : b) {
        cin >> x;
    }
    sort(a, a + n);
    sort(b, b + m);
    int cnt = 0, i = 0, j = 0;
    while (i < n && j < m) {
        if (abs(a[i] - b[j]) <= k) {
            cnt++;
            i++;
            j++;
        } else if (a[i] > b[j]) {
            j++;
        } else {
            i++;
        }
    }
    cout << cnt << endl;
    return 0;
}