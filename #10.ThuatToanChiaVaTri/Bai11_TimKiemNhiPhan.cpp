#include <bits/stdc++.h>
using namespace std;

bool BinarySearch(int a[], int l, int r, int x)
{
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
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (BinarySearch(a, 0, n - 1, k)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}