#include <bits/stdc++.h>
using namespace std;
const int MOD = (int)1e9 + 7;
int main()
{
    int n, k;
    cin >> n >> k;
    long long luyThua = 1;
    long long res = 0;
    while (k != 0) {
        if (k % 2 == 1) {
            res += luyThua;
            res %= MOD;
        }
        luyThua *= n;
        luyThua %= MOD;
        k /= 2;
    }
    cout << res << endl;
    return 0;
}
