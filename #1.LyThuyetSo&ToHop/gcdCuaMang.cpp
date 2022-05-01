#include <bits/stdc++.h>
using namespace std;
int cnt[1000001];
int main()
{
    int n;
    cin >> n;
    int a[n];
    int max_val = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
        max_val = max(max_val, a[i]);
    }
    for (int i = max_val; i >= 1; i--) {
        int dem = 0;
        for (int j = i; j <= max_val; j += i) {
            dem += cnt[j];
        }
        if (dem >= 2) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
