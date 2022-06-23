#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    for (int i = 0; i < n; i++) {
        if (!(a[i] == b[i] || a[i] == b[n - i - 1])) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
}