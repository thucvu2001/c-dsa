// Đưa ra số nguyên tố thứ k trong phân tích thừa số nguyên tố của một số nguyên dương n. Ví dụ n=28, k=3 ta có kết quả là 7 vì 28=2x2x7.

#include <bits/stdc++.h>
using namespace std;

int solve(int n, int k)
{
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
                ++cnt;
                if (cnt == k) {
                    return i;
                }
            }
        }
    }
    if (n != 1) {
        ++cnt;
    }
    if (cnt == k) {
        return n;
    }
    return -1;
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << solve(n, k) << endl;
    return 0;
}