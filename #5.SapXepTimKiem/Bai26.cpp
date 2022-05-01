#include <bits/stdc++.h>
using namespace std;

bool bs(int a[], int l, int r, int x)
{
    int res = -1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] == x) {
            return true;
        } else if (a[m] < x) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return false;
}
int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int& s : a) {
        cin >> s;
    }
    sort(a, a + n);
    for (int i = 0; i < n - 1; i++) {
        if (bs(a, i + 1, n - 1, x + a[i])) {
            cout << "1" << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}
