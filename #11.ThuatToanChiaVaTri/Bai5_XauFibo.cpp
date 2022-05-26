// Xâu S chỉ bao gồm các kí tự A và B được gọi là xâu Fibonacci nếu S(1) = 'A', S(2) = 'B', S(n) = S(n - 1) + S(n - 2),
// trong đó phép + là phép nối 2 xâu. Bài toán đặt ra là tìm kí tự thứ K trong xâu fibonacci thứ N.

// VD: A B AB BAB ABBAB BABABBAB
// n = 1 2  3  4    5      6
// k = 3, n = 5 => 'B'

#include <bits/stdc++.h>
using namespace std;

long long F[100]; // dùng để lưu các độ dài xâu

void init()
{
    F[0] = 0;
    F[1] = 1; // => F[1] = 'A' = 1; F[2] = 'B' = 1;
    for (int i = 2; i <= 92; i++) {
        F[i] = F[i - 1] + F[i - 2];
    }
}

char solve(int n, long long k)
{
    if (n == 1) {
        return 'A';
    }
    if (n == 2) {
        return 'B';
    }
    if (k <= F[n - 2]) { // nếu k nhỏ hơn độ dài xâu F[n - 2] thì xét trong xâu S[n - 2];
        return solve(n - 2, k);
    } else {
        return solve(n - 1, k - F[n - 2]);
    }
}

int main()
{
    init();
    long long n, k;
    cin >> n >> k;
    cout << solve(n, k) << endl;
    return 0;
}