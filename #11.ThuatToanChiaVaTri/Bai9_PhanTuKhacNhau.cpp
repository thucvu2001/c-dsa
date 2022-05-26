#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n - 1];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        cin >> b[i];
    }
    int i = 0;
    while (i < n - 1) {
        if (a[i] != b[i]) {
            cout << i + 1 << endl;
            return 0;
        }
        i++;
    }
    return 0;
}