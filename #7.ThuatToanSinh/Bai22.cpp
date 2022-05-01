#include <bits/stdc++.h>
using namespace std;

int n, a[1001];
bool check;
string s;
vector<string> res;

void init()
{
    s = string(n, '6');
}
void sinh()
{
    int i = n - 1;
    while (i >= 0 && s[i] == '8') {
        s[i] = '6';
        i--;
    }
    if (i == -1) {
        check = false;
    } else {
        s[i] = '8';
    }
}

void khoiTao()
{
    for (int i = 1; i <= 9; i++) {
        n = i;
        init();
        check = true;
        while (check) {
            string t = s;
            reverse(t.begin(), t.end());
            res.push_back(s + t);
            sinh();
        }
    }
}

int main()
{
    khoiTao();
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        cout << res[i] << " ";
    }
    return 0;
}