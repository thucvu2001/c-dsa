#include <bits/stdc++.h>
using namespace std;

// res[i]: so cach lua chon cac dong xu sao cho no co tong = i

int main()
{
    int n, X;
    cin >> n >> X;
    int a[n];
    long long res[X + 1];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i <= X; i++) {
        res[i] = 0;
    }
    res[0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= X; j++) {
            if (j >= a[i]) {
                res[j] += res[j - a[i]];
                res[j] %= (int)(1e9 + 7);
            }
        }
    }
    cout << res[X] % (int)(1e9 + 7) << endl;
    return 0;
}