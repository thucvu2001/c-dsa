#include <bits/stdc++.h>
using namespace std;

int n, k, a[100], X[100];
bool ok;

void nhap()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    ok = false;
}

void Try(int sum, int i, int pos)
{
    for (int j = pos; j < n; j++) {
        if (sum + a[j] <= k) {
            sum += a[j];
            X[i] = a[j];
            if (sum == k) {
                ok = true;
                cout << "[";
                for (int t = 0; t <= i; t++) {
                    cout << X[t];
                    if (t == i) {
                        cout << "]" << endl;
                    } else {
                        cout << " ";
                    }
                }
            } else {
                Try(sum, i + 1, j + 1);
            }
            sum -= a[j];
        }
    }
}

int main()
{
    nhap();
    Try(0, 0, 0); // sum = 0, i bat dau tu 0 la chi so cua tap con X[], j bat dau tu 0 la chi so cua tap cha a[]
    if (ok = false) {
        cout << "-1" << endl;
    }
    return 0;
}