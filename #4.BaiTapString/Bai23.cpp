#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b)
{
    string u = a + b;
    string v = b + a;
    return u > v;
}

int main()
{
    int n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    for (string x : a) {
        cout << x;
    }
    return 0;
}
