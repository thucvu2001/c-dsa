#include <bits/stdc++.h>
using namespace std;

int n, daXet[1001], X[1001];

bool check(int a[], int l, int r)
{
    for (int i = l; i < r; i++) {
        if (abs(a[i] - a[i + 1]) == 1) {
            return false;
        }
    }
    return true;
}

void Try(int i)
{
    for (int j = 1; j <= n; j++) {
        if (daXet[j] == 0) {
            X[i] = j;
            daXet[j] = 1;
            if (i == n) {
                bool ok = check(X, 1, n);
                if(ok){
                    for(int i = 1; i <= n; i++){
                        cout << X[i];
                    }
                    cout << endl;
                }
            } else {
                Try(i + 1);
            }
            daXet[j] = 0;
        }
    }
}

int main()
{
    cin >> n;
    Try(1);
    return 0;
}