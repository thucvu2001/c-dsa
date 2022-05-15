#include <bits/stdc++.h>
using namespace std;

void nhiPhan(long long n)
{
    if (n == 0) {
        return;
    } else {
        nhiPhan(n / 2);
        cout << n % 2;
    }
}

int main()
{
    long long n;
    cin >> n;
    if (n == 0) {
        cout << "0";
    } else {
        nhiPhan(n);
    }
    return 0;
}