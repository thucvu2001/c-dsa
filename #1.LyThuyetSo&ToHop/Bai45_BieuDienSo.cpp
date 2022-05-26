// Bạn được cung cấp một số nguyên x.Bạn có thể biểu diễn x bằng cách tổng của các số trong các số 11, 111, 1111, 11111,… (Các số mà bản thân nó chỉ chứa các chữ số 1) ? (Bạn có thể sử dụng bất kỳ số nào trong số chúng bất kỳ số lần nào).Ví dụ, 33 = 11 + 11 + 11 144 = 111 + 11 + 11 + 11

#include <bits/stdc++.h>
using namespace std;
bool check(long long n)
{
    for (int y = n / 111; y >= 0; y--) {
        int r = n - y * 111;
        if (r % 11 == 0) {
            return true;
        }
    }
    return false;
}
bool check2(long long n)
{
    int r = n % 111;
    if (r % 11 == 0) {
        return true;
    } else {
        return false;
    }
}

int main()
{
    long long n;
    cin >> n;
    if (check(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
