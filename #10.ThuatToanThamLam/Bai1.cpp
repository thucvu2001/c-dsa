#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10] = { 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1 };
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < 10; i++) {
        if (n >= a[i]) {
            ans += n / a[i];
            n %= a[i];
        }
    }
    cout << ans << endl;
    return 0;
}