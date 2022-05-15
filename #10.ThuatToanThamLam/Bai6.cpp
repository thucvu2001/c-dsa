#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    long long P = 0;
    sort(a, a + n, greater<int>());
    sort(b, b + n, greater<int>());
    for (int i = 0; i < n; i++) {
        P += 1ll * a[i] * b[i];
    }
    cout << P << endl;
    return 0;
}