// Đối với số nguyên dương n hãy xác định hàm f : f(n) = -1 + 2 - 3 +..+ (-1) ^ n * n Nhiệm vụ của bạn là tính f(n)
// cho một số nguyên n đã cho

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    if (n % 2 == 0) {
        cout << n / 2 << endl;
    } else {
        cout << (-n / 2) - 1 << endl;
    }
    return 0;
}
