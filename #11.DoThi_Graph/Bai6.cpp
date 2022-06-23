#include <bits/stdc++.h>
using namespace std;

int a[1001][1001];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] == 1) {
                cout << i << " " << j << endl;
            }
        }
    }
    cout << endl;
    for (int i = 1; i <= n; i++) {
        cout << i << " : ";
        for (int j = 1; j <= n; j++) {
            if (a[i][j] == 1) {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}