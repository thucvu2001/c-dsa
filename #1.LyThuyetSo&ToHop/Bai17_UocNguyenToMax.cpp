#include <bits/stdc++.h>
using namespace std;

int uocNguyenToMax(int n)
{
    int max = INT_MIN;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            max = i;
            while (n % i == 0) {
                n /= i;
            }
        }
    }
    if (n != 1) {
        max = n;
    }
    return max;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << uocNguyenToMax(n) << endl;
    }
}
