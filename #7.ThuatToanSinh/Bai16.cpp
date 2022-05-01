#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[1001];
    set<int> se;
    int cnt = 0;
    for (int i = 1; i <= k; i++) {
        cin >> a[i];
        se.insert(a[i]);
    }
    int i = k;
    while (i >= 1 && a[i] == n - k + i) {
        i--;
    }
    if (i == 0) {
        cout << k << endl;
        return 0;
    } else {
        a[i]++;
        for (int j = i + 1; j <= k; j++) {
            a[j] = a[j - 1] + 1;
        }
        for (int x = 1; x <= k; x++) {
            if (se.find(a[x]) == se.end()) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}