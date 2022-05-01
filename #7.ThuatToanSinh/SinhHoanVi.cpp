#include <bits/stdc++.h>
using namespace std;

int a[1001], n;
bool check;

void khoiTao()
{
    for (int i = 1; i <= n; i++) {
        a[i] = i;
    }
}

void sinh()
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1]) {
        i--;
    }
    if (i == 0) {
        check = false;
    } else {
        int j = n;
        while (a[i] > a[j]) {
            j--;
        }
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

int main()
{
    cin >> n;
    check = true;
    khoiTao();
    while (check) {
        for (int i = 1; i <= n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }
    return 0;
}