#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<long long> sum(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        sum[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        sum[i] = a[i];
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j]) {
                sum[i] = max(sum[i], sum[j] + a[i]);
            }
        }
    }
    cout << *max_element(sum.begin(), sum.end()) << endl;
    return 0;
}