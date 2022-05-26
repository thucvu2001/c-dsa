// Đếm số lượng ước của 1 số nguyên dương N.
#include <bits/stdc++.h>
using namespace std;

int demUoc(long long n)
{
    if (n == 1) {
        return 1;
    }
    int dem = 2;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (i != n / i) {
                dem += 2;
            } else {
                dem++;
            }
        }
    }
    return dem;
}

int main()
{
    long long n;
    cin >> n;
    cout << demUoc(n) << endl;
    return 0;
}
