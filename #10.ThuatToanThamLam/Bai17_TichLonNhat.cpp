#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    long long x1 = 1ll * a[n - 1] * a[n - 2];
    long long x2 = 1ll * a[0] * a[1];
    long long x3 = 1ll * a[0] * a[1] * a[n - 1];
    long long x4 = 1ll * a[n - 1] * a[n - 2] * a[n - 3];
    cout << max({ x1, x2, x3, x4 }) << endl;
    return 0;
}