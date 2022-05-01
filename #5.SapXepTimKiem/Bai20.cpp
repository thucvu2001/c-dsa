#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[1000001];
    int min_val = INT_MAX, max_val = INT_MIN;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[x]++;
        min_val = min(min_val, x);
        max_val = max(max_val, x);
    }
    int ans = 0;
    for (int i = min_val; i <= max_val; i++) {
        if (a[i] == 0) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
