#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int b = -1;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            b = i;
            break;
        }
    }
    if (b = -1) {
        cout << "NO" << endl;
        return 0;
    }
    for (int i = b + 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}