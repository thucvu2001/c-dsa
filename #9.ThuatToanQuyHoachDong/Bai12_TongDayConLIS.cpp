#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    long long sum[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum[i] = a[i]; // tổng lớn nhất của dãy con tăng dần kết thúc ở chỉ số i
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j]) {
                sum[i] = max(sum[i], sum[j] + a[i]);
            }
        }
    }
    cout << *max_element(sum, sum + n) << endl;
    return 0;
}