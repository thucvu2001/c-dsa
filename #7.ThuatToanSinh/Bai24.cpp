#include <bits/stdc++.h>
using namespace std;

int k;
char c, a[1001];
bool check;

void khoiTao()
{
    for (int i = 1; i <= k; i++) {
        a[i] = 'A';
    }
}

void sinh()
{
    int i = k;
    while (i >= 1 && a[i] == c) {
        i--;
    }
    if (i == 0) {
        check = false;
    } else {
        a[i]++;
        for (int j = i + 1; j <= k; j++) {
            a[j] = 'A';
        }
    }
}

int main()
{
    cin >> c >> k;
    check = true;
    khoiTao();
    while (check) {
        for (int i = 1; i <= k; i++) {
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
    return 0;
}