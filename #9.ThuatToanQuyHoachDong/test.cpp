#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, S;
    cin >> n >> S;
    bool check[S + 1] = { false };
    check[0] = true;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = S; j >= a[i]; j--) {
            if (check[j - a[i]] == true) {
                check[j] = true;
            }
        }
    }
    cout << check[S] << endl;
    return 0;
}