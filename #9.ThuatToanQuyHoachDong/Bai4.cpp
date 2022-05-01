#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, S;
    cin >> n >> S;
    int a[n];
    vector<bool> res(n + 1, false);
    res[0] = true;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = S; j >= a[i]; j--) {
            if (res[j - a[i]] == true) {
                res[j] = true;
            }
        }
    }
    if (res[S] == true) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }
    return 0;
}