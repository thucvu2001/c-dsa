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

bool check(int n)
{
    int cnt = 0;
    while (n) {
        int r = n % 10;
        if (r != 2 && r != 3 && r != 5 && r != 7) {
            return false;
        }
        cnt += r;
        n /= 10;
    }
    if (nt(cnt) == false) {
        return false;
    }
    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int dem = 0;
    for (int i = a; i <= b; i++) {
        if (check(i) && nt(i)) {
            dem++;
        }
    }
    cout << dem << endl;
    return 0;
}
