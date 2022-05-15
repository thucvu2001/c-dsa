#include <bits/stdc++.h>
using namespace std;
 // Xau con tang dai nhat
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> L(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        L[i] = 1;
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j]) {
                L[i] = max(L[i], L[j] + 1);
            }
        }
    }
    cout << *max_element(L.begin(), L.end()) << endl;
    return 0;
}