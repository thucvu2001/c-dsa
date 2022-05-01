#include <bits/stdc++.h>
using namespace std;
int chuSoDauTien(long long n)
{
    if (n < 10) {
        return n;
    } else {
        return chuSoDauTien(n / 10);
    }
}

int main()
{
    long long n;
    cin >> n;
    cout << chuSoDauTien(n) << endl;
    return 0;
}