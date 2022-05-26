// Cho số tự nhiên N và số nguyên tố P.
// Nhiệm vụ của bạn là tìm số x lớn nhất để N! chia hết cho p^x.
// Ví dụ với N=7, p=3 thì x=2 là số lớn nhất để 7! Chia hết cho 3^2.

#include <bits/stdc++.h>
using namespace std;

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
    long long n;
    int p;
    cin >> n >> p;
    cout << count(n, p) << endl;
    return 0;
}
