// Cho số tự nhiên N. Nhiệm vụ của bạn là hãy kiểm tra N có phải là số Smith hay không?
// Một số được gọi là số Smith nếu N không phải là số nguyên tố và có tổng các chữ số của N bằng tổng các chữ số của các thừa số nguyên tố trong phân tích của N.
// Ví dụ N = 666 có các thừa số nguyên tố là 2, 3, 3, 37 có tổng các chữ số là 18.

#include <bits/stdc++.h>
using namespace std;

bool nt(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int tongChuSo(int n)
{
    int tong = 0;
    while (n) {
        tong += n % 10;
        n /= 10;
    }
    return tong;
}

bool check(int n)
{
    int tmp = tongChuSo(n);
    if (nt(n)) {
        return false;
    }
    int sum = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            sum += tongChuSo(i);
            n /= i;
        }
    }
    if (n != 1) {
        sum += tongChuSo(n);
    }
    return tmp == sum;
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
