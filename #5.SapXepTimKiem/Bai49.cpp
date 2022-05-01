#include <bits/stdc++.h>
using namespace std;

bool check(int a[], int n, int k, double long m)
{
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        ans += m / a[i];
    }
    if (ans >= k) {
        return true;
    } else {
        return false;
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long left = 1;
    long long right = k * (*min_element(a, a + n));
    double long res;
    while (left <= right) {
        double long mid = (double long)(left + right) / 2;
        if (check(a, n, k, mid)) {
            res = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    cout << res << endl;
    return 0;
}