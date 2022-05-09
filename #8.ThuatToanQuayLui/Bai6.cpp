#include <bits/stdc++.h>
using namespace std;

int n, X[101], cot[101], xuoi[101], nguoc[101], ans = 0;

void nhap()
{
    cin >> n;
    memset(cot, 1, sizeof(cot));
    memset(xuoi, 1, sizeof(xuoi));
    memset(nguoc, 1, sizeof(nguoc));
}

void Try(int i)
{
    for (int j = 1; j <= n; j++) {
        if (cot[j] && xuoi[i - j + n] && nguoc[i + j - 1]) {
            cot[j] = xuoi[i - j + n] = nguoc[i + j - 1] = 0;
            X[i] = j;
            if (i == n) {
                ++ans;
            } else {
                Try(i + 1);
            }
            cot[j] = xuoi[i - j + n] = nguoc[i + j - 1] = 1;
        }
    }
}

int main()
{
    nhap();
    Try(1);
    cout << ans << endl;
    return 0;
}