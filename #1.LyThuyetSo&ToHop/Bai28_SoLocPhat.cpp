// Một số được gọi là “lộc phát” nếu chỉ có các chữ số 0,6,8. Nhập vào một số nguyên hãy kiểm tra xem đó có phải số lộc phát hay không. Nếu đúng in ra 1, sai in ra 0.
#include <bits/stdc++.h>
using namespace std;

bool check(long long n)
{
    while (n) {
        int r = n % 10;
        if (r != 0 && r != 6 && r != 8) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main()
{
    long long n;
    cin >> n;
    if (check(n)) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }
    return 0;
}
