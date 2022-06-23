#include <bits/stdc++.h>
using namespace std;

int n;
string s;
vector<string> res;
bool check;

void init()
{
    s = string(n, '0');
}

void sinh()
{
    int i = s.length() - 1;
    while (i >= 0 && s[i] == '1') {
        s[i] = '0';
        i--;
    }
    if (i == -1) {
        check = false;
    } else {
        s[i] = '1';
    }
}

void khoiTao()
{
    for (int i = 1; i <= 15; i++) {
        check = true;
        n = i;
        init();
        while (check) {
            string t = s;
            reverse(begin(t), end(t));
            res.push_back(s + t);
            sinh();
        }
    }
}

int main()
{
    int l;
    cin >> l;
    khoiTao();
    sort(begin(res), end(res));
    for (string x : res) {
        if (x.size() <= l) {
            cout << x << endl;
        }
    }
    return 0;
}