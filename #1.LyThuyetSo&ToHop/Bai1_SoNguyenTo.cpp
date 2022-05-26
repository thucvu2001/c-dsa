#include <bits/stdc++.h>
using namespace std;

bool nt(long long n)
{
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    long long n;
    cin >> n;
    if (nt(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}