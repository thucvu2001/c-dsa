#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int dem0 = 0;
    for (int& x : a) {
        cin >> x;
        if (x == 0) {
            dem0++;
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            cout << a[i] << " ";
        }
    }
    for (int i = 0; i < dem0; i++) {
        cout << "0 ";
    }
    return 0;
}
