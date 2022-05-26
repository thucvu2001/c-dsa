#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    if (n == 1) {
        cout << "1" << endl;
        return;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << i << endl;
            return;
        }
    }
    cout << n << endl;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        solve(i);
    }
    return 0;
}
