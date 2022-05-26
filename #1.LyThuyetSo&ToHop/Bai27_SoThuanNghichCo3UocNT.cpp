// Một số được coi là đẹp nếu nó là số thuận nghịch và có ít nhất 3 ước số nguyên tố khác nhau.
// Viết chương trình in ra các số đẹp như vậy trong một đoạn giữa hai số nguyên cho trước

#include <bits/stdc++.h>
using namespace std;

bool thuanNghich(int n)
{
    int abc = n;
    int tmp = 0;
    while (n) {
        tmp = tmp * 10 + n % 10;
        n /= 10;
    }
    return tmp == abc;
}

bool check(int n)
{
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cnt++;
            while (n % i == 0) {
                n /= i;
            }
        }
    }
    if (n != 1) {
        cnt++;
    }
    return cnt >= 3;
}

int main()
{
    int a, b;
    cin >> a >> b;
    bool ok = false;
    for (int i = a; i <= b; i++) {
        if (thuanNghich(i) && check(i)) {
            cout << i << " ";
            ok = true;
        }
    }
    if (ok == false) {
        cout << "-1" << endl;
    }
    return 0;
}
