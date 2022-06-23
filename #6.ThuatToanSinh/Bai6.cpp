#include <bits/stdc++.h>
using namespace std;
int n, a[1001];
bool check;
vector<string> v;
void khoiTao()
{
    string s = "";
    for (int i = 1; i <= n; i++) {
        a[i] = i;
        s += to_string(a[i]);
    }
    v.push_back(s);
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
    khoiTao();
    check = true;
    while (check) {
        string s = "";
        for (int i = 1; i <= n; i++) {
            s += to_string(a[i]);
        }
        v.push_back(s);
        sinh();
    }
    for (int i = v.size() - 1; i > 0; i--) {
        cout << v[i] << endl;
    }
    return 0;
}