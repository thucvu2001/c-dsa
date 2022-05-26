// In ra số lượng chữ số 0 liên tiếp tính từ cuối của N! Ví dụ bạn có N = 10, 10!= 3628800. Như vậy, 10! có 2 chữ số 0 liên tiếp tính từ cuối.
#include <bits/stdc++.h>
using namespace std;

int count(long long n)
{
    int ans = 0;
    for (long long i = 5; i <= n; i *= 5) {
        ans += (n / i % 1000000007);
        ans %= 1000000007;
    }
    return ans;
}

int main()
{
    long long n;
    cin >> n;
    cout << count(n) << endl;
    return 0;
}
