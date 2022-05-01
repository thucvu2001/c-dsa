#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> S1(n);
    vector<int> S2(n);
    vector<int> kq(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        S1[i] = a[i];
        S2[i] = a[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j]) {
                S1[i] = max(S1[i], S1[j] + a[i]);
            }
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        for (int j = n - 1; j > i; j--) {
            if (a[i] > a[j]) {
                S2[i] = max(S2[i], S2[j] + a[i]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        kq[i] = S1[i] + S2[i] - a[i];
    }
    cout << *max_element(kq.begin(), kq.end()) << endl;
    return 0;
}