#include <bits/stdc++.h>
using namespace std;

int n, k, X[1001];

void in()
{
    for (int i = 1; i <= k; i++) {
        cout << X[i];
    }
    cout << endl;
}

void Try(int i)
{
    for (int j = 1; j <= n; j++) {
        X[i] = j;
        if (i == k) {
            in();
        } else {
            Try(i + 1);
        }
    }
}

int main()
{
    cin >> n >> k;
    Try(1);
    return 0;
}