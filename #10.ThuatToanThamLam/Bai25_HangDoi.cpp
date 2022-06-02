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
    sort(a, a + n);
    int dem = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= sum) {
            ++dem;
            sum += a[i];
        }
    }
    cout << dem << endl;
    return 0;
}