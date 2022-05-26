#include <bits/stdc++.h>
using namespace std;

bool nt(int n)
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

bool chuSoNt(int n)
{
    while (n) {
        int r = n % 10;
        if (r != 2 && r != 3 && r != 5 && r != 7) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (chuSoNt(i) && nt(i)) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}