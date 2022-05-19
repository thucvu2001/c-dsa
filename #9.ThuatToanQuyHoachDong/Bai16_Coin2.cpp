#include <bits/stdc++.h>
using namespace std;

// nguoc lai voi bai 17:
// voi moi gia tri thi xet tat ca ca dong xu doi voi gia tri do
// dao nguoc 2 vong for

int main()
{
    int n, X;
    cin >> n >> X;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long res[X + 1] = { 0 };
    res[0] = 1;
    for (int i = 0; i <= X; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= a[j]) {
                res[i] += res[i - a[j]];
                res[i] %= (int)(1e9 + 7);
            }
        }
    }
    cout << res[X] % (int)(1e9 + 7) << endl;
    return 0;
}