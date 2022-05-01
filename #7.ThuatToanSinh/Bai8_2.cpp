#include <bits/stdc++.h>
using namespace std;
int a[10001];
bool check;
int main()
{
    int n;
    cin >> n;
    int x[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> x[i];
    }
    for (int i = 1; i <= n; i++) {
        a[i] = i;
    }
    int cnt = 1;
    do {
        bool ok = true;
        for (int i = 1; i <= n; i++) {
            if (x[i] != a[i]) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << cnt << endl;
            return 0;
        }
        cnt++;
    } while (next_permutation(a + 1, a + n + 1));
    return 0;
}