#include <bits/stdc++.h>
using namespace std;

int n, sum = 0, a[1001], x[1001], ok;

void nhap()
{
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
    }
}

void Try(int i, int pos, int s)
{
    if(ok){
        return;
    }
    for(int j = pos; j <= n; j++){
        if(s + a[j] <= sum){
            s += a[j];
            if(s == sum){
                ok = 1;
            } else {
                Try(i + 1, j + 1, s);
            }
            s -= a[j];
        }
    }
}

int main()
{
    nhap();
    if(sum % 2 != 0){
        cout << "0" << endl;
    } else {
        sum /= 2;
        Try(1, 1, 0);
        cout << ok << endl;
    }
    return 0;
}