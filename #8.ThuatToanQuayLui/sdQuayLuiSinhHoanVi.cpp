#include <bits/stdc++.h>
using namespace std;

int n, daxet[1001], X[1001];

void in()
{
    for (int i = 1; i <= n; i++) {
        cout << X[i];
    }
    cout << endl;
}

void Try(int i)
{
    for (int j = 1; j <= n; j++) {
        if (daxet[j] == 0) {
            X[i] = j;
            daxet[j] = 1;
            if (i == n) {
                in();
            } else {
                Try(i + 1);
            }
            daxet[j] = 0;
        }
    }
}

int main()
{
    memset(daxet, 0, sizeof(daxet));
    cin >> n;
    Try(1);
    return 0;
}