// Một số được coi là số đẹp nếu nó là số thuận nghịch, có chứa ít nhất một chữ số 6, và tổng các chữ số của nó có chữ số cuối cùng là 8. Viết chương trình liệt kê các số đẹp trong đoạn giữa 2 số nguyên cho trước, các số cách nhau một dấu cách.
#include <bits/stdc++.h>
using namespace std;

bool thuanNghich(int n)
{
    int x = n;
    int cnt = 0;
    while (n) {
        cnt = cnt * 10 + n % 10;
        n /= 10;
    }
    return cnt == x;
}

bool chua6(int n)
{
    while (n) {
        if (n % 10 == 6) {
            return true;
        }
        n /= 10;
    }
    return false;
}

bool tong8(int n)
{
    int tong = 0;
    while (n) {
        tong += n % 10;
        n /= 10;
    }
    return tong % 10 == 8;
}

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (chua6(i) && tong8(i) && thuanNghich(i)) {
            cout << i << " ";
        }
    }
    return 0;
}
