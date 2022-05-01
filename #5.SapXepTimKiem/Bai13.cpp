#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int& x : a)
        cin >> x;
    sort(a, a + n, greater<int>());
    int doCung = a[0];
    int cnt = 1;
    for (int i = 1; i < n; i++) {
        doCung = min(doCung - 1, a[i]);
        if (doCung >= 1) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
