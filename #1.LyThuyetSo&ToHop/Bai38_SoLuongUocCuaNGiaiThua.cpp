// Đếm số lượng ước của n!.

#include <bits/stdc++.h>
using namespace std;

const int MOD = (int)1e9 + 7;
int prime[100001];
void sang()
{
    for (int i = 0; i <= 100000; i++) {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= sqrt(100000); i++) {
        if (prime[i]) {
            for (int j = i * i; j <= 100000; j += i) {
                prime[j] = 0;
            }
        }
    }
}
long long count(long long n, int p)
{
    long long ans = 0;
    for (long long i = p; i <= n; i *= p) {
        ans += n / i;
    }
    return ans;
}

int main()
{
    sang();
    int n;
    cin >> n;
    long long ans = 1;
    for (int i = 1; i <= n; i++) {
        if (prime[i]) {
            int bac = count(n, i);
            ans *= (bac + 1);
            ans %= MOD;
        }
    }
    cout << ans << endl;
    return 0;
}
