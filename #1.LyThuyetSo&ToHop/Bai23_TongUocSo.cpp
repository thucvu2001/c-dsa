// Tính tổng ước của 1 số nguyên dương N.
#include <bits/stdc++.h>
using namespace std;

long long tongUoc(long long n)
{
    if (n == 1) {
        return 1;
    }
    long long sum = n + 1;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }
    return sum;
}

int main()
{
    long long n;
    cin >> n;
    cout << tongUoc(n) << endl;
    return 0;
}
