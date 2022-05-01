#include <bits/stdc++.h>
using namespace std;

int n, a[1001];
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
    while (i >= 0 && a[i] > a[i + 1]) {
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
    khoiTao();
    string s = "";
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        s += to_string(x);
    }
    int cnt = 1;
    check = true;
    while (check) {
        string t = "";
        for (int i = 1; i <= n; i++) {
            t += to_string(a[i]);
        }
        if (t == s) {
            cout << cnt << endl;
        } else {
            cnt++;
        }
        sinh();
    }

    return 0;   
}