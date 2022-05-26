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
    long long sum[n + 1];
    sum[0] = a[0];
    sum[1] = max(a[1], a[0]);
    for (int i = 2; i < n; i++) {
        sum[i] = max(sum[i - 1], sum[i - 2] + a[i]);
    }
    cout << sum[n - 1] << endl;
    return 0;
}