#include <bits/stdc++.h>
using namespace std;

long long F[94];

void sinh()
{
    F[0] = 0;
    F[1] = 1; // F[2] = 1;
    for (int i = 2; i <= 93; i++) {
        F[i] = F[i - 1] + F[i - 2];
    }
}

int number(int n, long long k)
{
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    if (k <= F[n - 2]) {
        return number(n - 2, k);
    } else {
        return number(n - 1, k - F[n - 2]);
    }
}

int main()
{
    int n;
    cin >> n;
    sinh();
    long long k;
    cin >> k;
    cout << number(n, k) << endl;
    return 0;
}